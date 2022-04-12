#include "ColorCodeTest.h"

using namespace TelecommunicationColorCoder;

int main()
{
    ColorCode colorCode;
    colorCode.printReferenceManual();
    
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    return 0;
}
