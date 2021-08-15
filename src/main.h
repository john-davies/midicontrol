// main.h - header file for main.c
//          part of the midicontrol program
// Copyright (C) 2020 John Davies
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

#ifndef MAIN_H
#define MAIN_H

#include <gtk/gtk.h>

// Names and definitions
#define PROGRAM_NAME "Midi Controller"
#define PORT_NAME "Output"
#define CC_VALUE 7

// Maximum path & file lengths etc
#define APP_NAME_SIZE 256
#define MAX_PATHSIZE 4096
#define MAX_FILENAME 256
#define MAX_LINESIZE 1024
#define MAX_WINDOW_TITLE APP_NAME_SIZE + MAX_FILENAME + 4
#define DIRECTORY_SEPARATOR '/'
#define NO_OF_SLIDERS 16

// Useful macros
// Convert a boolean into a printable string
#define btoa(x) ( (x) ? "TRUE" : "FALSE" )

// Custom structure that holds pointers to widgets and user variables
typedef struct {
    // Pointers to widgets
    GtkWidget *w_window_main;
    GtkWidget *w_sliders[ NO_OF_SLIDERS ];
    GtkWidget *w_dlg_open;
    GtkWidget *w_dlg_save_as;

    // Current open file path
    gchar app_name[ APP_NAME_SIZE ];
    gchar current_file_path[ MAX_PATHSIZE ];
    gchar current_file_name[ MAX_FILENAME ];
    gchar window_title[ MAX_WINDOW_TITLE ];

} app_widgets;

// Error return for file operations
typedef struct {
  gboolean result;
  gchar *message;
} result_return;

void on_window_main_destroy( app_widgets * );


#endif
