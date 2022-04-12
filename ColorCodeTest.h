#ifndef COLORCODETEST
#define COLORCODETEST

#include <assert.h>
#include "ColorCode.h"

using namespace TelecommunicationColorCoder;
using namespace std;

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);

#endif