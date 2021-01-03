#include <Bounce.h>

// cc values for buttons
int cc_off = 0;
int cc_on = 127;
int cc_super = 127;

// map buttons to cc for button
int cc0 = 39;
int cc1 = 43;
int cc2 = 47;
int cc3 = 51;
int cc4 = 38;
int cc5 = 42;
int cc6 = 46;
int cc7 = 50;
int cc8 = 37;
int cc9 = 41;
int cc10 = 45;
int cc11 = 49;
int cc12 = 36;
int cc13 = 40;
int cc14 = 44;
int cc15 = 48;


Bounce button0 = Bounce(0, 15);
Bounce button1 = Bounce(1, 15);
Bounce button2 = Bounce(2, 15);
Bounce button3 = Bounce(3, 15);
Bounce button4 = Bounce(4, 15);
Bounce button5 = Bounce(5, 15);
Bounce button6 = Bounce(6, 15);
Bounce button7 = Bounce(7, 15);
Bounce button8 = Bounce(8, 15);
Bounce button9 = Bounce(9, 15);
Bounce button10 = Bounce(10, 15);
Bounce button11 = Bounce(11, 15);
Bounce button12 = Bounce(12, 15);
Bounce button13 = Bounce(13, 15);
Bounce button14 = Bounce(14, 15);
Bounce button15 = Bounce(15, 15);


void setup() {
  // MIDI rate
  Serial.begin(31250);
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
}

void loop() {
  
  // Push Button code
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();
  button12.update();
  button13.update();
  button14.update();
  button15.update();

 
  if (button0.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc0, cc_on, 1);
  }
  if (button1.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc1, cc_on, 1);
  }
  if (button2.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc2, cc_on, 1);
  }
  if (button3.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc3, cc_on, 1);
  }
  if (button4.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc4, cc_on, 1);
  }
  if (button5.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc5, cc_on, 1);
  }
  if (button6.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc6, cc_on, 1);
  }
  if (button7.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc7, cc_on, 1);
  }
  if (button8.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc8, cc_on, 1);
  }
  if (button9.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc9, cc_on, 1);
  }
  if (button10.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc10, cc_on, 1);
  }
  if (button11.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc11, cc_on, 1);
  }
  if (button12.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc12, cc_on, 1);
  }
  if (button13.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc13, cc_on, 1);
  }
  if (button14.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc14, cc_on, 1);
  }
  if (button15.fallingEdge())
  {
    usbMIDI.sendNoteOn(cc15, cc_on, 1);
  }

   

  if (button0.risingEdge())
  {
    usbMIDI.sendNoteOff(cc0, cc_off, 1);
  }
  if (button1.risingEdge())
  {
    usbMIDI.sendNoteOff(cc1, cc_off, 1);
  }
  if (button2.risingEdge())
  {
    usbMIDI.sendNoteOff(cc2, cc_off, 1);
  }
  if (button3.risingEdge())
  {
    usbMIDI.sendNoteOff(cc3, cc_off, 1);
  }
  if (button4.risingEdge())
  {
    usbMIDI.sendNoteOff(cc4, cc_off, 1);
  }
  if (button5.risingEdge())
  {
    usbMIDI.sendNoteOff(cc5, cc_off, 1);
  }
  if (button6.risingEdge())
  {
    usbMIDI.sendNoteOff(cc6, cc_off, 1);
  }
  if (button7.risingEdge())
  {
    usbMIDI.sendNoteOff(cc7, cc_off, 1);
  }
  if (button8.risingEdge())
  {
    usbMIDI.sendNoteOff(cc8, cc_off, 1);
  }
  if (button9.risingEdge())
  {
    usbMIDI.sendNoteOff(cc9, cc_off, 1);
  }
  if (button10.risingEdge())
  {
    usbMIDI.sendNoteOff(cc10, cc_off, 1);
  }
  if (button11.risingEdge())
  {
    usbMIDI.sendNoteOff(cc11, cc_off, 1);
  }
  if (button12.risingEdge())
  {
    usbMIDI.sendNoteOff(cc12, cc_off, 1);
  }
  if (button13.risingEdge())
  {
    usbMIDI.sendNoteOff(cc13, cc_off, 1);
  }
  if (button14.risingEdge())
  {
    usbMIDI.sendNoteOff(cc14, cc_off, 1);
  }
  if (button15.risingEdge())
  {
    usbMIDI.sendNoteOff(cc15, cc_off, 1);
  }
  
}
