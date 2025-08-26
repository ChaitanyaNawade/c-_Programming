#include<iostream>
using namespace std;

float CalculateArea(float Height,float Width,float PI = 3.14f)
{
    float Area  = PI * Height * Width;
    return Area;
}

int main()
{
    float iValue1 =  10.34f;

    float iValue2 =  10.5f;

    float iRet = 0;

    iRet = CalculateArea(iValue1,iValue2);

    cout<<"The Ares is "<<iRet<<"\n";

    return 0;
}