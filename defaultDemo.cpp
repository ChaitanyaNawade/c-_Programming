#include<iostream>
using namespace std;
float Area(float Rad,float PI=3.14)
{
    float Result=0.0f;
    Result=PI*Rad*Rad;
    return Result;
}
int main()
{
    float input=0.0f;
    float Ans=0.0f;

    cout<<"Enter the Radius of circle :";
    cin>>input;

    Ans=Area(input,7.10);
    cout<<"The Area of cirlce is :"<<Ans<<"\n";

    Ans=Area(input);
    cout<<"The Area of circle is :"<<Ans<<"\n";

    return 0;
}