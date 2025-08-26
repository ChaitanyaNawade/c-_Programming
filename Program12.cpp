#include<iostream>
using namespace std;

class Arithmatic
{
    public :
    int No1;
    int No2;
    int Ans;

    Arithmatic(int A, int B)
    {
        No1 = A;
        No2 = B;
        Ans = 0; 
    }


    void Addition()
    {
        Ans = No1 + No2;
    }


    void DisplayAddition()
    {
        cout<<"Addtiton of  two number is : "<<Ans;
    }
};

int main()
{
    int iValue1 = 0;

    int iValue2 = 0;

    cout<<"Enter two numbers\n";

    cin>>iValue1;
    cin>>iValue2;

    Arithmatic aobj(iValue1,iValue2);
    aobj.Addition();
    aobj.DisplayAddition();
    return 0;
}