// file.h - header file for file.c
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

#ifndef FILE_H
#define FILE_H

void on_load_button_clicked( GtkWidget *, app_widgets * );
void on_save_button_clicked( GtkWidget *, app_widgets * );

result_return open_file( gchar*, app_widgets * );
result_return save_file( app_widgets * );

#endif
