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


  g_info( "file.c / ~open_file");
  return( file_process );
}

// --------------------------------------------------------------------------
// on_load_button_clicked
//
// Shows an "open file" selector and acts on the results
//
// --------------------------------------------------------------------------

void on_load_button_clicked( GtkWidget *source, app_widgets *app_wdgts)
{
    //gchar *file_path = NULL;        // Name of file to open from dialog box
    //result_return file_op;

    g_info( "file.c / on_load_button_clicked");
    /*
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
    */
    g_info( "file.c / ~on_load_button_clicked");
}

// --------------------------------------------------------------------------
// save_file
//
// Saves the current project to a mapter file
//
// --------------------------------------------------------------------------

result_return save_file( app_widgets *app_wdgts )
{
  result_return file_process = { TRUE, "" };

  g_info( "file.c / ~save_file" );
  return( file_process );
}

// --------------------------------------------------------------------------
// on_save_button_clicked
//
// Shows a "save file" selector and acts on the results
//
// --------------------------------------------------------------------------

void on_save_button_clicked( GtkWidget *source, app_widgets *app_wdgts)
{
    //gchar *file_name = NULL;        // Name of file to open from dialog box
    //result_return save_response;

    g_info( "file.c / on_save_button_clicked" );
    /*
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
    */
    g_info( "file.c / ~on_save_button_clicked" );
}
