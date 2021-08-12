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

// Useful macros
// Convert a boolean into a printable string
#define btoa(x) ( (x) ? "TRUE" : "FALSE" )

// Custom structure that holds pointers to widgets and user variables
typedef struct {
    // Pointers to widgets
    GtkWidget *w_window_main;
    GtkWidget *w_ch1_slider;
    GtkWidget *w_ch2_slider;
    GtkWidget *w_ch3_slider;
    GtkWidget *w_ch4_slider;
    GtkWidget *w_ch5_slider;
    GtkWidget *w_ch6_slider;
    GtkWidget *w_ch7_slider;
    GtkWidget *w_ch8_slider;
    GtkWidget *w_ch9_slider;
    GtkWidget *w_ch10_slider;
    GtkWidget *w_ch11_slider;
    GtkWidget *w_ch12_slider;
    GtkWidget *w_ch13_slider;
    GtkWidget *w_ch14_slider;
    GtkWidget *w_ch15_slider;
    GtkWidget *w_ch16_slider;
} app_widgets;

// Error return for file operations
typedef struct {
  gboolean result;
  gchar *message;
} result_return;

void on_window_main_destroy( app_widgets * );


#endif
