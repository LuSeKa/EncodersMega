#include "Arduino.h"
#include "digitalWriteFast.h"

// a lot of stuff has to be know at compile time for efficiency of the ISRs.

// defines the digital I/O of the second encoder channel. Can be freely chosen.
#define ENCODERDIRPIN_1 14
#define ENCODERDIRPIN_2 15
// these are hardware interrupt pins and specific for the different kinds of Arduinos
#define ENCODERINTPIN_1 2
#define ENCODERINTPIN_2 3
// directions. application specific, usually no need to change
#define ENCODERDIRECTION_1 1
#define ENCODERDIRECTION_2 1

class EncodersMega
{
	public:
		EncodersMega();
		long getCount_1();
		long getCount_2();
		void encoderCount_1();
		void encoderCount_2();
		
	private:
		long counter1;
		long counter2;
	};


// ADD THIS TO YOUR PROJECT CODE //
/*
 * Includes:
#include "digitalWriteFast.h"
#include "EncodersMega.h"
 * Declarations:
EncodersMega encoders;
void encoderCount_1() {encoders.encoderCount_1();}
void encoderCount_2() {encoders.encoderCount_2();}
 * In the setup() routine:
attachInterrupt(digitalPinToInterrupt(ENCODERINTPIN_1), encoderCount_1, CHANGE);
attachInterrupt(digitalPinToInterrupt(ENCODERINTPIN_2), encoderCount_2, CHANGE);
*/

// now you can read with encoders.getCount_1() and encoders.getCount_2()
