#include "ColorCodeTest.h"
#include "ColorCodeReferenceManual.h"

using namespace TelecommunicationColorCoder;

int main()
{
    printReferenceManual();
    
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    return 0;
}
