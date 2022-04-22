#include "ColorCodeTest.h"

using namespace TelecommunicationColorCoder;
using namespace std;

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor)
{
    ColorCode colorCode;
    colorCode.convertPairNumberToColor(pairNumber);
    cout << "Got pair " << colorCode.toString() << endl;
    assert(colorCode.getMajorColor() == expectedMajor);
    assert(colorCode.getMinorColor() == expectedMinor);
}

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber)
{
    ColorCode colorCode;
    int pairNumber = colorCode.getPairNumberFromColor(major, minor);
    cout << "Got pair number " << pairNumber << endl;
    assert(pairNumber == expectedPairNumber);
}