#include "ColorPair.h"

namespace TelecommunicationColorCoder
{
    MajorColor ColorPair::getMajorColor()
    {
        return majorColor;
    }
    
    MinorColor ColorPair::getMinorColor()
    {
        return minorColor;
    }
    
    void ColorPair::setMajorColor(MajorColor major)
    {
        majorColor = major;
    }
    
    void ColorPair::setMinorColor(MinorColor minor)
    {
        minorColor = minor;
    }
    
    std::string ColorPair::toString()
    {
        std::string colorPairName = MajorColorNames[majorColor];
        colorPairName += " ";
        colorPairName += MinorColorNames[minorColor];
        return colorPairName;
    }
}