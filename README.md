# Midi Controller

## Update information

* v0.2 - Minimum viable product

## Operation

The Midi Controller is designed to control the volume levels of a Midi synth by sending Control Change messages. Each channel can be controlled individually and the settings can be loaded or saved. At the moment only CC7 messages can be sent.

Midi Controller only works with ALSA Midi and can be subscribed to using the command line or by an application like `aconnectgui`

To build, type `make`. The [GTK+ 3 library](https://www.gtk.org/) is needed along with the [ALSA sound library](https://www.alsa-project.org/wiki/Main_Page). The GUI is designed using [Glade](https://glade.gnome.org/)

## Screenshot

### Application

![Midi Controller Interface](/doc-images/midicontroller.jpg)

### System Interface

Running `aconnect -i` will give something like the output below with the Midi Controller being port 128:0

    $ aconnect -i
    client 0: 'System' [type=kernel]
        0 'Timer           '
        1 'Announce        '
    client 14: 'Midi Through' [type=kernel]
        0 'Midi Through Port-0'
    client 20: 'Keystation Mini 32 MK3' [type=kernel,card=1]
        0 'Keystation Mini 32 MK3 MIDI 1'
    client 32: 'MidiSport 2x2' [type=kernel,card=4]
        0 'MidiSport 2x2 MIDI 1'
        1 'MidiSport 2x2 MIDI 2'
    client 128: 'Midi Controller' [type=user,pid=3958]
        0 'Output          '

![aconnectgui](/doc-images/aconnect.jpg)
