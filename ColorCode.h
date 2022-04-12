#ifndef COLORCODE
#define COLORCODE

#include "ColorPair.h"

namespace TelecommunicationColorCoder
{
    class ColorCode : public ColorPair
    {
        public:
        void convertPairNumberToColor(int pairNumber);
        int getPairNumberFromColor(MajorColor major, MinorColor minor);
        void printReferenceManual();
    };
}

#endif