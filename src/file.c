// file.c - functions to handle the open and save preset buttons
//          part of the midicontrol program
// Copyright (C) 2021 John Davies
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include "main.h"
#include "file.h"
#include "util.h"

// --------------------------------------------------------------------------
// open_file
//
// Opens and loads a saved mapter file
//
// --------------------------------------------------------------------------

result_return open_file( gchar* file_path, app_widgets *app_wdgts )
{
  result_return file_process = { TRUE, "" };
  gchar input_line[ MAX_LINESIZE ];
  gchar *read_line;
  g_info( "file.c / open_file");

  // Open the file for reading
  FILE *input_file = fopen( file_path, "r" );
  if( input_file == NULL )
  {
    g_info( "  ERROR: Could not open file for reading" );
    file_process.result = FALSE;
    file_process.message = "Could not open file for reading";
  }
  else
  {
    // Check first line
    read_line = fgets( input_line, MAX_LINESIZE, input_file );
    if( read_line == NULL )
    {
      g_info( "  ERROR: Empty file" );
      file_process.result = FALSE;
      file_process.message = "Empty file";
    }
    else
    {
      // Trim trailing CRLF characters
      read_line[ strcspn( read_line, "\r\n" ) ] = '\0';
      if( strcmp( read_line, PROGRAM_NAME ) != 0 )
      {
        g_info( "  ERROR: Wrong header line" );
        file_process.result = FALSE;
        file_process.message = "Wrong header line";
      }
      else
      {
        // Good to go so read the rest of the lines
        for( int l = 0; l < NO_OF_SLIDERS; l++ )
        {
          read_line = fgets( input_line, MAX_LINESIZE, input_file );
          if( read_line == NULL )
          {
            // EOF so just exit
            break;
          }
          // Trim trailing CRLF characters
          read_line[ strcspn( read_line, "\r\n" ) ] = '\0';
          int value = atoi( read_line );
          // Set slider ( will be clamped automatically )
          gtk_range_set_value( GTK_RANGE( app_wdgts->w_sliders[l] ), (gdouble) value );
        }
      }
    }
  }

  // Tidy up
  update_file_path( file_path, app_wdgts );
  update_window_title( app_wdgts );

  g_info( "file.c / ~open_file");
  return( file_process );
}

// --------------------------------------------------------------------------
// on_open_button_clicked
//
// Shows an "open file" selector and acts on the results
//
// --------------------------------------------------------------------------

void on_open_button_clicked( GtkWidget *source, app_widgets *app_wdgts)
{
    gchar *file_path = NULL;        // Name of file to open from dialog box
    result_return file_op;

    g_info( "file.c / on_open_button_clicked");

    // Show the "Open Text File" dialog box
    gtk_widget_show( app_wdgts->w_dlg_open );

    // Check return value from Open Text File dialog box to see if user clicked the Open button
    if( gtk_dialog_run( GTK_DIALOG( app_wdgts->w_dlg_open ) ) == GTK_RESPONSE_OK )
    {
        // Get the file name from the dialog box
        file_path = gtk_file_chooser_get_filename( GTK_FILE_CHOOSER( app_wdgts->w_dlg_open ) );
        if (file_path != NULL)
        {
          file_op = open_file( file_path, app_wdgts );
          if( file_op.result == FALSE )
          {
            // Show error if necessary
            GtkWidget *dialog_box = gtk_message_dialog_new( GTK_WINDOW( app_wdgts->w_dlg_open ),
                                          GTK_DIALOG_DESTROY_WITH_PARENT,
                                          GTK_MESSAGE_ERROR,
                                          GTK_BUTTONS_CLOSE,
                                          NULL );
            gtk_message_dialog_set_markup( GTK_MESSAGE_DIALOG (dialog_box), file_op.message );
            gtk_dialog_run( GTK_DIALOG( dialog_box ) );
            gtk_widget_destroy( dialog_box );
          }
        }
        g_free(file_path);
    }
    gtk_widget_hide(app_wdgts->w_dlg_open );
    g_info( "file.c / ~on_open_button_clicked");
}

// --------------------------------------------------------------------------
// save_file
//
// Saves the current project to a midicontrol file
//
// --------------------------------------------------------------------------

result_return save_file( app_widgets *app_wdgts )
{
  result_return file_process = { TRUE, "" };

  g_info( "file.c / save_file" );

  FILE *output_file = fopen( app_wdgts->current_file_path, "w" );
  if( output_file != NULL )
  {
    // Print header
    fprintf( output_file, "%s\n", PROGRAM_NAME );
    // Prine each slider value
    for( int sl = 0; sl < NO_OF_SLIDERS; sl++ )
    {
       fprintf( output_file, "%d\n", (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[sl] ) ) );
    }

    // Close file and tidy up
    fclose( output_file );
    update_window_title( app_wdgts );
  }
  else
  {
  g_info( "  ERROR: Could not open file for writing: %s", app_wdgts->current_file_path );
  file_process.result = FALSE;
  file_process.message = "Could not open file for writing";
  }

  g_info( "file.c / ~save_file" );
  return( file_process );
}

// --------------------------------------------------------------------------
// on_save_button_clicked
//
// If the file has already been saved then overwites the contents
// If the file hasn't been saved already then show the "save as" dialog
//
// --------------------------------------------------------------------------

void on_save_button_clicked( GtkWidget *source, app_widgets *app_wdgts)
{
    result_return save_response;

    g_info( "file.c / on_save_button_clicked" );

    // Check if this file has been saved already
    if( strlen( app_wdgts->current_file_path ) == 0 )
    {
      // No so show "save as"
      on_saveas_button_clicked( source, app_wdgts );
    }
    else
    {
      // Yes so just save
      save_response = save_file( app_wdgts );
      // Show error if necessary
      if( save_response.result == FALSE )
      {
        g_info( "  ERROR: could not save: %s", app_wdgts->current_file_path );
        // Show error if necessary
        GtkWidget *dialog_box = gtk_message_dialog_new( GTK_WINDOW( app_wdgts->w_dlg_open ),
                                      GTK_DIALOG_DESTROY_WITH_PARENT,
                                      GTK_MESSAGE_ERROR,
                                      GTK_BUTTONS_CLOSE,
                                      NULL );
        gtk_message_dialog_set_markup( GTK_MESSAGE_DIALOG (dialog_box), save_response.message );
        gtk_dialog_run( GTK_DIALOG( dialog_box ) );
        gtk_widget_destroy( dialog_box );
      }
    }
  g_info( "file.c / ~on_save_button_clicked" );

}

// --------------------------------------------------------------------------
// on_saveas_button_clicked
//
// Shows a "save file" selector and acts on the results
//
// --------------------------------------------------------------------------

void on_saveas_button_clicked( GtkWidget *source, app_widgets *app_wdgts)
{
    gchar *file_name = NULL;        // Name of file to open from dialog box
    result_return save_response;

    g_info( "file.c / on_saveas_button_clicked" );
    gtk_widget_show(app_wdgts->w_dlg_save_as );

    // Check return value to see if user clicked the Save button
    if (gtk_dialog_run(GTK_DIALOG (app_wdgts->w_dlg_save_as ) ) == GTK_RESPONSE_OK)
    {
        // Get the file name from the dialog box
        file_name = gtk_file_chooser_get_filename( GTK_FILE_CHOOSER( app_wdgts->w_dlg_save_as ) );
        if (file_name != NULL)
        {
          update_file_path( file_name, app_wdgts );
          save_response = save_file( app_wdgts );
          // Show error if necessary
          if( save_response.result == FALSE )
          {
            // Show error if necessary
            GtkWidget *dialog_box = gtk_message_dialog_new( GTK_WINDOW( app_wdgts->w_dlg_open ),
                                          GTK_DIALOG_DESTROY_WITH_PARENT,
                                          GTK_MESSAGE_ERROR,
                                          GTK_BUTTONS_CLOSE,
                                          NULL );
            gtk_message_dialog_set_markup( GTK_MESSAGE_DIALOG (dialog_box), save_response.message );
            gtk_dialog_run( GTK_DIALOG( dialog_box ) );
            gtk_widget_destroy( dialog_box );
          }
        }
        g_free(file_name);
    }

    gtk_widget_hide(app_wdgts->w_dlg_save_as );
    g_info( "file.c / ~on_saveas_button_clicked" );
}
