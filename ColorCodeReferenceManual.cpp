#include "ColorCodeReferenceManual.h"

using namespace std;

namespace TelecommunicationColorCoder
{
    void printReferenceManual()
    {
        ColorCode colorCode;
        cout << "**********Reference Manual**********" << endl;
        cout << "Pair Number -> Color Code" <<endl;
        for(int pairNumber=ONE; pairNumber<=MAXIMUMCOLORPAIR; pairNumber++)
        {
            colorCode.convertPairNumberToColor(pairNumber);
            cout << pairNumber << " -> " << colorCode.toString() << endl;
        }
        cout << "************************************" << endl;
    }
}
