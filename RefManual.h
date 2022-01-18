#ifndef REFMANUAL_H
#define REFMANUAL_H

#include <iostream>
#include "main.hpp"

using namespace std;

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
    {
        return major * numberOfMinorColors + minor + 1;
    }    

    void Print_Ref_Manual()
    {
       cout<<"                        "<<endl;
       cout<<"    Reference Manual    "<<endl; 
       cout<<"                        "<<endl;
       cout<<"No     -       ColorPair"<<endl;
       cout<<"                        "<<endl;
       for(int PairNumber(1); PairNumber <= 25;PairNumber++)
       {
          TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(PairNumber);
          cout<<PairNumber<<"     -    "<<colorPair.ToString()<<endl;
       }
    }
}
#endif