// main.c - main entry point
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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include <time.h>
#include "main.h"
#include "gui.h"
#include "midi.h"


// --------------------------------------------------------------------------
// on_window_main_destroy
//
// Called on exit
//
// --------------------------------------------------------------------------

void on_window_main_destroy( app_widgets *app_wdgts )
{
  g_info( "main.c / on_window_main_destroy");
  gtk_main_quit();
  g_info( "main.c / ~on_window_main_destroy");
}


// --------------------------------------------------------------------------
// main
//
// Main entry point, initial setup and launch of main window
//
// --------------------------------------------------------------------------

int main( int argc, char *argv[] )
{
    GtkBuilder      *builder;
    GtkWidget       *window;

    // Open MIDI sequencer
    result_return res = init_midi();
    if( res.result == FALSE )
    {
      g_print( "ERROR - could not open MIDI device: %s", res.message );
      return EXIT_FAILURE;
    }

    // Instantiate structure, allocating memory for it
    app_widgets     *widgets = g_slice_new(app_widgets);

    gtk_init(&argc, &argv);

    //builder = gtk_builder_new_from_file("glade/window_main.glade");
    builder = gtk_builder_new_from_string( glade_definition, -1 );

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
    // Pointers to widgets here
    widgets->w_window_main = window;
    widgets->w_ch1_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch1_slider" ) );
    widgets->w_ch2_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch2_slider" ) );
    widgets->w_ch3_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch3_slider" ) );
    widgets->w_ch4_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch4_slider" ) );
    widgets->w_ch5_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch5_slider" ) );
    widgets->w_ch6_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch6_slider" ) );
    widgets->w_ch7_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch7_slider" ) );
    widgets->w_ch8_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch8_slider" ) );
    widgets->w_ch9_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch9_slider" ) );
    widgets->w_ch10_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch10_slider" ) );
    widgets->w_ch11_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch11_slider" ) );
    widgets->w_ch12_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch12_slider" ) );
    widgets->w_ch13_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch13_slider" ) );
    widgets->w_ch14_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch14_slider" ) );
    widgets->w_ch15_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch15_slider" ) );
    widgets->w_ch16_slider = GTK_WIDGET( gtk_builder_get_object( builder, "ch16_slider" ) );

     // Widgets pointer are passed to all widget handler functions as the user_data parameter
    gtk_builder_connect_signals( builder, widgets );

    g_object_unref( builder );

    g_info( "main.c / main" );

    gtk_widget_show_all(window);

    gtk_main();
    // Free up widget structure memory
    g_slice_free( app_widgets, widgets );

    return EXIT_SUCCESS;
}
