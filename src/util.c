// util.c - general utilities
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

#include <gtk/gtk.h>
#include <string.h>
#include "main.h"
#include "util.h"

// --------------------------------------------------------------------------
// update_file_path
//
// Stores the file path for the current project
// Extracts the file name and stores that separately
//
// --------------------------------------------------------------------------

void update_file_path( gchar *new_path, app_widgets *app_wdgts )
{

  //char *file_name;
  g_info( "util.c / update_file_path");
  /*
  // Copy the whole path
  strncpy( app_wdgts->current_file_path, new_path, MAX_PATHSIZE-1 );
  g_info( "  New file path: %s", app_wdgts->current_file_path );
  // Extract the file name to display in the window header
  file_name = strrchr( new_path, DIRECTORY_SEPARATOR );
  if( file_name != NULL )
  {
      strncpy( app_wdgts->current_file_name, ++file_name, MAX_FILENAME-1 );
  }
  else
  {
    // No directory separator so copy the whole file path
    strncpy( app_wdgts->current_file_name, new_path, MAX_FILENAME-1 );
  }
  app_wdgts->current_file_name[MAX_FILENAME] = '\0';
  g_info( "  New file name: %s", app_wdgts->current_file_name );
  */
  g_info( "util.c / ~update_file_path");
}

// --------------------------------------------------------------------------
// update_window_title
//
// Updates the main window title using the stored file name
// Format is either:
//     midicontrol -> for blank filename
//     <filename> | midicontrol -> for valid filename
//
// --------------------------------------------------------------------------

void update_window_title( app_widgets *app_wdgts )
{

  g_info( "util.c / update_window_title");
  /*
  if( strlen( app_wdgts->current_file_name ) > 0 )
  {
    snprintf( app_wdgts->window_title, MAX_WINDOW_TITLE, "%s | %s",
              app_wdgts->current_file_name,
              app_wdgts->app_name );
    gtk_window_set_title( GTK_WINDOW( app_wdgts->w_window_main ), app_wdgts->window_title );
    g_info( "  New window title: %s", app_wdgts->window_title );
  }
  else
  {
    gtk_window_set_title( GTK_WINDOW( app_wdgts->w_window_main ), app_wdgts->app_name );
    g_info( "  New window title: %s", app_wdgts->app_name );
  }
  */
  g_info( "util.c / ~update_window_title");
}
