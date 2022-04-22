#include "ColorCode.h"

using namespace std;

namespace TelecommunicationColorCoder
{
    void ColorCode::convertPairNumberToColor(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - ONE;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        setMajorColor(majorColor);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        setMinorColor(minorColor);
    }
    
    int ColorCode::getPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + ONE;
    }
}
