# EncodersMega
Small interrrupt-based library to use two quadrature wheel encoders with the Aduino Mega


# How to Use
## ADD THIS TO YOUR PROJECT CODE

```cpp

// Includes:
#include "digitalWriteFast.h"
#include "EncodersMega.h"
// Declarations:
EncodersMega encoders;
void encoderCount_1() {encoders.encoderCount_1();}
void encoderCount_2() {encoders.encoderCount_2();}
// In the setup() routine:
attachInterrupt(digitalPinToInterrupt(ENCODERINTPIN_1), encoderCount_1, CHANGE);
attachInterrupt(digitalPinToInterrupt(ENCODERINTPIN_2), encoderCount_2, CHANGE);

// now you can read with encoders.getCount_1() and encoders.getCount_2()
``` 
