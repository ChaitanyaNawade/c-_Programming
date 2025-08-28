//This program illustrates the concept of function overloading in cpp 
#include<iostream>
using namespace std;

class Demo  
{
    public :
    int Addition(int A,int B)
    {
        return A+B;
    }

    int Addition(int A,int B,int C)
    {
        return A+B+C;
    }

    int Addition(float A,float B)
    {
        return A+B;
    }
};

int main()
{
    Demo dobj;
    cout<<dobj.Addition(10,11)<<"\n";
    cout<<dobj.Addition(10,11,12)<<"\n";
    cout<<dobj.Addition(10.0f,12.2f)<<"\n";
    return 0;
}