#ifndef E_ENCODER
#define E_ENCODER

#include <arduino.h>

float ReadEncoder(int encoderPin);
void EncoderSetup(int encoderPin);
void TestEncoder(int encoderPin);



#endif