// midi.c - MIDI handlers
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
#include "midi.h"
#include <alsa/asoundlib.h>

// MIDI sequencer setup
snd_seq_t *seq;
int port;

// --------------------------------------------------------------------------
// init_midi
//
// Initialise the MIDI output
//
// --------------------------------------------------------------------------

result_return init_midi( void )
{
  result_return res = { TRUE, "" };
  int err;

  g_info( "midi.c / init_midi");

  // Open sequencer
  err = snd_seq_open( &seq, "default", SND_SEQ_OPEN_OUTPUT, 0 );
  if( err < 0 )
  {
    res.result = FALSE;
    res.message = "Init failure";
    return res;
  }

  // Set name
  err = snd_seq_set_client_name( seq, PROGRAM_NAME );
  if( err < 0 )
  {
    res.result = FALSE;
    res.message = "Could not set name";
    return res;
  }

  // Create source port
  port = snd_seq_create_simple_port( seq, PORT_NAME,
          SND_SEQ_PORT_CAP_READ | SND_SEQ_PORT_CAP_SUBS_READ,
          SND_SEQ_PORT_TYPE_MIDI_GENERIC );
  if( port < 0 )
  {
    res.result = FALSE;
    res.message = "Could not create port";
    return res;
  }

  g_info( "midi.c / ~init_midi");
  return res;
}

// --------------------------------------------------------------------------
// send_on_midi_channel
//
// sends a message on a single MIDI channel
//
// --------------------------------------------------------------------------

void send_on_midi_channel( int channel, int cc, int value )
{
  g_info( "midi.c / send_on_midi_channel");

  snd_seq_event_t ev;

  // Build packet
  snd_seq_ev_clear( &ev );
  snd_seq_ev_set_source( &ev, port );
  snd_seq_ev_set_subs( &ev );
  snd_seq_ev_set_direct( &ev );
  snd_seq_ev_set_controller( &ev, channel-1, cc, value );
  // And send
  snd_seq_event_output(seq, &ev);
  snd_seq_drain_output(seq);

  g_info( "midi.c / ~send_on_midi_channel");
}

// --------------------------------------------------------------------------
// on_resend_button_clicked
//
// resends all CC messages to port
//
// --------------------------------------------------------------------------

void on_refresh_button_clicked( GtkWidget *source, app_widgets *app_wdgts)
{
  g_info( "midi.c / on_refresh_button_clicked");

  on_ch1_slider_value_changed( source, app_wdgts );
  on_ch2_slider_value_changed( source, app_wdgts );
  on_ch3_slider_value_changed( source, app_wdgts );
  on_ch4_slider_value_changed( source, app_wdgts );
  on_ch5_slider_value_changed( source, app_wdgts );
  on_ch6_slider_value_changed( source, app_wdgts );
  on_ch7_slider_value_changed( source, app_wdgts );
  on_ch8_slider_value_changed( source, app_wdgts );
  on_ch9_slider_value_changed( source, app_wdgts );
  on_ch10_slider_value_changed( source, app_wdgts );
  on_ch11_slider_value_changed( source, app_wdgts );
  on_ch12_slider_value_changed( source, app_wdgts );
  on_ch13_slider_value_changed( source, app_wdgts );
  on_ch14_slider_value_changed( source, app_wdgts );
  on_ch15_slider_value_changed( source, app_wdgts );
  on_ch16_slider_value_changed( source, app_wdgts );

  g_info( "midi.c / ~on_refresh_button_clicked");
}

// --------------------------------------------------------------------------
// on_ch1_slider_value_changed
//
// Channel 1 slider changed
//
// --------------------------------------------------------------------------

void on_ch1_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch1_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[0] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 1, CC_VALUE, value );

  g_info( "midi.c / ~on_ch1_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch2_slider_value_changed
//
// Channel 2 slider changed
//
// --------------------------------------------------------------------------

void on_ch2_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch2_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[1] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 2, CC_VALUE, value );

  g_info( "midi.c / ~on_ch2_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch3_slider_value_changed
//
// Channel 3 slider changed
//
// --------------------------------------------------------------------------

void on_ch3_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch3_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[2] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 3, CC_VALUE, value );

  g_info( "midi.c / ~on_ch3_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch4_slider_value_changed
//
// Channel 4 slider changed
//
// --------------------------------------------------------------------------

void on_ch4_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch4_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[3] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 4, CC_VALUE, value );

  g_info( "midi.c / ~on_ch4_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch5_slider_value_changed
//
// Channel 5 slider changed
//
// --------------------------------------------------------------------------

void on_ch5_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch1_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[4] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 5, CC_VALUE, value );

  g_info( "midi.c / ~on_ch1_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch6_slider_value_changed
//
// Channel 6 slider changed
//
// --------------------------------------------------------------------------

void on_ch6_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch6_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[5] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 6, CC_VALUE, value );

  g_info( "midi.c / ~on_ch6_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch7_slider_value_changed
//
// Channel 7 slider changed
//
// --------------------------------------------------------------------------

void on_ch7_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch7_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[6] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 7, CC_VALUE, value );

  g_info( "midi.c / ~on_ch7_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch8_slider_value_changed
//
// Channel 8 slider changed
//
// --------------------------------------------------------------------------

void on_ch8_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch8_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[7] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 8, CC_VALUE, value );

  g_info( "midi.c / ~on_ch8_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch9_slider_value_changed
//
// Channel 9 slider changed
//
// --------------------------------------------------------------------------

void on_ch9_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch9_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[8] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 9, CC_VALUE, value );

  g_info( "midi.c / ~on_ch9_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch10_slider_value_changed
//
// Channel 10 slider changed
//
// --------------------------------------------------------------------------

void on_ch10_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch10_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[9] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 10, CC_VALUE, value );

  g_info( "midi.c / ~on_ch10_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch11_slider_value_changed
//
// Channel 11 slider changed
//
// --------------------------------------------------------------------------

void on_ch11_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch11_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[10] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 11, CC_VALUE, value );

  g_info( "midi.c / ~on_ch11_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch12_slider_value_changed
//
// Channel 12 slider changed
//
// --------------------------------------------------------------------------

void on_ch12_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch12_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[11] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 12, CC_VALUE, value );

  g_info( "midi.c / ~on_ch12_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch13_slider_value_changed
//
// Channel 13 slider changed
//
// --------------------------------------------------------------------------

void on_ch13_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch13_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[12] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 13, CC_VALUE, value );

  g_info( "midi.c / ~on_ch13_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch14_slider_value_changed
//
// Channel 14 slider changed
//
// --------------------------------------------------------------------------

void on_ch14_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch14_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[13] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 14, CC_VALUE, value );

  g_info( "midi.c / ~on_ch14_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch15_slider_value_changed
//
// Channel 15 slider changed
//
// --------------------------------------------------------------------------

void on_ch15_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch15_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[14] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 15, CC_VALUE, value );

  g_info( "midi.c / ~on_ch15_slider_value_changed");
}

// --------------------------------------------------------------------------
// on_ch16_slider_value_changed
//
// Channel 16 slider changed
//
// --------------------------------------------------------------------------

void on_ch16_slider_value_changed( GtkWidget *source, app_widgets *app_wdgts )
{
  g_info( "midi.c / on_ch16_slider_value_changed");

  int value = (int) gtk_range_get_value( GTK_RANGE( app_wdgts->w_sliders[15] ) );
  // Send new value
  g_info( "New value: %i", value );
  send_on_midi_channel( 16, CC_VALUE, value );

  g_info( "midi.c / ~on_ch16_slider_value_changed");
}
