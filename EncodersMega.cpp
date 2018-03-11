#include "Arduino.h"
#include "EncodersMega.h"

EncodersMega::EncodersMega()
{
	pinMode(ENCODERDIRPIN_1, INPUT);
	pinMode(ENCODERDIRPIN_2, INPUT);
	counter1 = 0;
	counter2 = 0;
}

long EncodersMega::getCount_1()
{
	return EncodersMega::counter1;
}
long EncodersMega::getCount_2()
{
	return EncodersMega::counter2;
}

// interrupt routines that increment or decrement the counters according to the direction of rotation
// these are tuned for efficiency (i.e., low number of CPU cycles) and therefore not quite as readable as code should be.
void EncodersMega::encoderCount_1()
{
  EncodersMega::counter1 += ENCODERDIRECTION_1 * ((digitalRead(ENCODERINTPIN_1)<<1) - 1) * ((digitalRead(ENCODERDIRPIN_1)<<1) - 1); // add -1 or 1 to counter, depending on the state of dirPin1 
}

void EncodersMega::encoderCount_2()
{
  EncodersMega::counter2 += ENCODERDIRECTION_2 * ((digitalRead(ENCODERINTPIN_2)<<1) - 1) * ((digitalRead(ENCODERDIRPIN_2)<<1) - 1); // add -1 or 1 to counter, depending on the state of dirPin2
}
