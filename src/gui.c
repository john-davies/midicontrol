// gui.c - GUI definition file for mapter
//         Generated using Glade and make_gui.sh script
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

#include <gtk/gtk.h>

const gchar *glade_definition = R""""(

<?xml version="1.0" encoding="UTF-8"?>
<!-- Generated with glade 3.38.2 -->
<interface>
  <requires lib="gtk+" version="3.24"/>
  <object class="GtkAdjustment" id="cc_adjustment_1">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_10">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_11">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_12">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_13">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_14">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_15">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_16">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_2">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_3">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_4">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_5">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_6">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_7">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_8">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkAdjustment" id="cc_adjustment_9">
    <property name="upper">127</property>
    <property name="value">100</property>
    <property name="step-increment">1</property>
    <property name="page-increment">10</property>
  </object>
  <object class="GtkWindow" id="window_main">
    <property name="can-focus">False</property>
    <property name="title" translatable="yes">MIDI Controller v0.2</property>
    <property name="resizable">False</property>
    <signal name="destroy" handler="on_window_main_destroy" swapped="no"/>
    <child>
      <object class="GtkBox">
        <property name="height-request">400</property>
        <property name="visible">True</property>
        <property name="can-focus">False</property>
        <property name="margin-start">10</property>
        <property name="margin-end">10</property>
        <property name="margin-top">10</property>
        <property name="margin-bottom">10</property>
        <property name="orientation">vertical</property>
        <child>
          <object class="GtkBox">
            <property name="visible">True</property>
            <property name="can-focus">False</property>
            <property name="margin-start">5</property>
            <property name="margin-end">5</property>
            <property name="homogeneous">True</property>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch1_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_1</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch1_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch1_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 1</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">0</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch2_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_2</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch2_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch2_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 2</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">1</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch3_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_3</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch3_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch3_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 3</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">2</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch4_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_4</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch4_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch4_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 4</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">3</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch5_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_5</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch5_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch5_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 5</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">4</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch6_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_6</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch6_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch6_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 6</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">5</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch7_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_7</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch7_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch7_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 7</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">6</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch8_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_8</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch8_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch8_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 8</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">7</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch9_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_9</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch9_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch9_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 9</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">8</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch10_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_10</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch10_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch10_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 10</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">9</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch11_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_11</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch11_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch11_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 11</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">10</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch12_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_12</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch12_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch12_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 12</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">11</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch13_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_13</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch13_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch13_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 13</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">12</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch14_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_14</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch14_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch14_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 14</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">13</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch15_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_15</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch15_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch15_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 15</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">14</property>
              </packing>
            </child>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can-focus">False</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="orientation">vertical</property>
                <child>
                  <object class="GtkScale" id="ch16_slider">
                    <property name="visible">True</property>
                    <property name="can-focus">True</property>
                    <property name="orientation">vertical</property>
                    <property name="adjustment">cc_adjustment_16</property>
                    <property name="inverted">True</property>
                    <property name="restrict-to-fill-level">False</property>
                    <property name="fill-level">0</property>
                    <property name="round-digits">0</property>
                    <property name="digits">0</property>
                    <property name="value-pos">bottom</property>
                    <signal name="value-changed" handler="on_ch16_slider_value_changed" swapped="no"/>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="ch16_label">
                    <property name="visible">True</property>
                    <property name="can-focus">False</property>
                    <property name="margin-top">5</property>
                    <property name="label" translatable="yes">Ch 16</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">15</property>
              </packing>
            </child>
          </object>
          <packing>
            <property name="expand">True</property>
            <property name="fill">True</property>
            <property name="position">0</property>
          </packing>
        </child>
        <child>
          <object class="GtkBox">
            <property name="visible">True</property>
            <property name="can-focus">False</property>
            <property name="margin-start">10</property>
            <property name="margin-end">10</property>
            <property name="margin-top">10</property>
            <property name="margin-bottom">10</property>
            <property name="homogeneous">True</property>
            <child>
              <object class="GtkButton" id="open_button">
                <property name="label">gtk-open</property>
                <property name="visible">True</property>
                <property name="can-focus">True</property>
                <property name="receives-default">True</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="use-stock">True</property>
                <signal name="clicked" handler="on_open_button_clicked" swapped="no"/>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">0</property>
              </packing>
            </child>
            <child>
              <object class="GtkButton" id="save_button">
                <property name="label">gtk-save</property>
                <property name="visible">True</property>
                <property name="can-focus">True</property>
                <property name="receives-default">True</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="use-stock">True</property>
                <signal name="clicked" handler="on_save_button_clicked" swapped="no"/>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">1</property>
              </packing>
            </child>
            <child>
              <object class="GtkButton" id="saveas_button">
                <property name="label">gtk-save-as</property>
                <property name="visible">True</property>
                <property name="can-focus">True</property>
                <property name="receives-default">True</property>
                <property name="use-stock">True</property>
                <signal name="clicked" handler="on_saveas_button_clicked" swapped="no"/>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">2</property>
              </packing>
            </child>
            <child>
              <object class="GtkButton" id="refresh_button">
                <property name="label">gtk-refresh</property>
                <property name="visible">True</property>
                <property name="can-focus">True</property>
                <property name="receives-default">True</property>
                <property name="margin-start">10</property>
                <property name="margin-end">10</property>
                <property name="use-stock">True</property>
                <signal name="clicked" handler="on_refresh_button_clicked" swapped="no"/>
              </object>
              <packing>
                <property name="expand">False</property>
                <property name="fill">True</property>
                <property name="position">3</property>
              </packing>
            </child>
          </object>
          <packing>
            <property name="expand">False</property>
            <property name="fill">True</property>
            <property name="position">2</property>
          </packing>
        </child>
      </object>
    </child>
  </object>
  <object class="GtkFileFilter" id="midicontrol_file">
    <patterns>
      <pattern>*.midictl</pattern>
    </patterns>
  </object>
  <object class="GtkFileChooserDialog" id="dlg_open">
    <property name="can-focus">False</property>
    <property name="title" translatable="yes">Open</property>
    <property name="type-hint">dialog</property>
    <property name="transient-for">window_main</property>
    <property name="filter">midicontrol_file</property>
    <child internal-child="vbox">
      <object class="GtkBox">
        <property name="can-focus">False</property>
        <property name="orientation">vertical</property>
        <property name="spacing">2</property>
        <child internal-child="action_area">
          <object class="GtkButtonBox">
            <property name="can-focus">False</property>
            <property name="layout-style">end</property>
            <child>
              <object class="GtkButton" id="button1">
                <property name="label">gtk-cancel</property>
                <property name="visible">True</property>
                <property name="can-focus">True</property>
                <property name="receives-default">True</property>
                <property name="use-stock">True</property>
              </object>
              <packing>
                <property name="expand">True</property>
                <property name="fill">True</property>
                <property name="position">0</property>
              </packing>
            </child>
            <child>
              <object class="GtkButton" id="button2">
                <property name="label">gtk-open</property>
                <property name="visible">True</property>
                <property name="can-focus">True</property>
                <property name="receives-default">True</property>
                <property name="use-stock">True</property>
              </object>
              <packing>
                <property name="expand">True</property>
                <property name="fill">True</property>
                <property name="position">1</property>
              </packing>
            </child>
          </object>
          <packing>
            <property name="expand">False</property>
            <property name="fill">False</property>
            <property name="position">0</property>
          </packing>
        </child>
        <child>
          <placeholder/>
        </child>
      </object>
    </child>
    <action-widgets>
      <action-widget response="-6">button1</action-widget>
      <action-widget response="-5">button2</action-widget>
    </action-widgets>
  </object>
  <object class="GtkFileChooserDialog" id="dlg_save_as">
    <property name="can-focus">False</property>
    <property name="title" translatable="yes">Save as</property>
    <property name="type-hint">dialog</property>
    <property name="transient-for">window_main</property>
    <property name="action">save</property>
    <property name="do-overwrite-confirmation">True</property>
    <property name="filter">midicontrol_file</property>
    <child internal-child="vbox">
      <object class="GtkBox">
        <property name="can-focus">False</property>
        <property name="orientation">vertical</property>
        <property name="spacing">2</property>
        <child internal-child="action_area">
          <object class="GtkButtonBox">
            <property name="can-focus">False</property>
            <property name="layout-style">end</property>
            <child>
              <object class="GtkButton" id="button3">
                <property name="label">gtk-cancel</property>
                <property name="visible">True</property>
                <property name="can-focus">True</property>
                <property name="receives-default">True</property>
                <property name="use-stock">True</property>
              </object>
              <packing>
                <property name="expand">True</property>
                <property name="fill">True</property>
                <property name="position">0</property>
              </packing>
            </child>
            <child>
              <object class="GtkButton" id="button4">
                <property name="label">gtk-save-as</property>
                <property name="visible">True</property>
                <property name="can-focus">True</property>
                <property name="receives-default">True</property>
                <property name="use-stock">True</property>
              </object>
              <packing>
                <property name="expand">True</property>
                <property name="fill">True</property>
                <property name="position">1</property>
              </packing>
            </child>
          </object>
          <packing>
            <property name="expand">False</property>
            <property name="fill">False</property>
            <property name="position">0</property>
          </packing>
        </child>
        <child>
          <placeholder/>
        </child>
      </object>
    </child>
    <action-widgets>
      <action-widget response="-6">button3</action-widget>
      <action-widget response="-5">button4</action-widget>
    </action-widgets>
  </object>
</interface>
)"""";
