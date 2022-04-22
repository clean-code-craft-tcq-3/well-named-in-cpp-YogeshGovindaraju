#ifndef COLORPAIR
#define COLORPAIR

#include <iostream>
#include <vector>
#include <string>

namespace TelecommunicationColorCoder
{
    #define ONE 1
    #define MAXIMUMCOLORPAIR 25
    
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    
    class ColorPair
    {
        private:
        MajorColor majorColor;
        MinorColor minorColor;
        
        public:
        std::vector<std::string> MajorColorNames{"White", "Red", "Black", "Yellow", "Violet"};
        std::vector<std::string> MinorColorNames{"Blue", "Orange", "Green", "Brown", "Slate"};
        
        int numberOfMajorColors = MajorColorNames.size();
        int numberOfMinorColors = MinorColorNames.size();
        
        MajorColor getMajorColor();
        MinorColor getMinorColor();
        void setMajorColor(MajorColor major);
        void setMinorColor(MinorColor minor);
        std::string toString();
    };
}

#endif