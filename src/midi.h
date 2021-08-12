// midi.h - header file for midi.c
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

#ifndef MIDI_H
#define MIDI_H

result_return init_midi( void );

void send_on_midi_channel( int, int, int );
void on_resend_button_clicked( GtkWidget *, app_widgets * );

void on_ch1_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch2_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch3_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch4_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch5_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch6_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch7_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch8_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch9_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch10_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch11_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch12_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch13_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch14_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch15_slider_value_changed( GtkWidget *, app_widgets * );
void on_ch16_slider_value_changed( GtkWidget *, app_widgets * );

#endif
