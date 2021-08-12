# Makefile - makefile for the mapter program
# Copyright (C) 2020 John Davies
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http:#www.gnu.org/licenses/>.


# Derived from https:#prognotes.net/2015/07/gtk-3-glade-c-programming-template/

TARGET=midicontrol

# compiler
CC=gcc
# debug
DEBUG=-g
# optimisation
OPT=-O0
# warnings
WARN=-Wall

PTHREAD=-pthread

CCFLAGS=$(DEBUG) $(OPT) $(WARN) $(PTHREAD) -pipe

GTKLIB=`pkg-config --cflags --libs gtk+-3.0` -lasound

# linker
LD=gcc
LDFLAGS=$(PTHREAD) $(GTKLIB) -export-dynamic

OBJS= main.o util.o file.o gui.o midi.o

all: $(OBJS)
		$(LD) -o $(TARGET) $(OBJS) $(LDFLAGS)

main.o: src/main.c src/main.h src/file.h src/util.h src/gui.h
		$(CC) -c $(CCFLAGS) src/main.c $(GTKLIB) -o main.o

file.o: src/file.c src/file.h src/main.h src/util.h
		$(CC) -c $(CCFLAGS) src/file.c $(GTKLIB) -o file.o

util.o: src/util.c src/util.h src/main.h
		$(CC) -c $(CCFLAGS) src/util.c $(GTKLIB) -o util.o

midi.o: src/midi.c src/midi.h src/main.h
		$(CC) -c $(CCFLAGS) src/midi.c $(GTKLIB) -o midi.o

gui.o: src/gui.c src/gui.h glade/window_main.glade
		./make_gui.sh
		$(CC) -c $(CCFLAGS) src/gui.c $(GTKLIB) -o gui.o

clean:
		rm -f *.o $(TARGET)
