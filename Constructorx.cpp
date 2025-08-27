#include<iostream>
using namespace std;
class Arithmatic
{
    public :
    int No1;
    int No2;

    Arithmatic()
    {
        cout<<"Inside default constructor\n";
        No1 = 0;
        No2 = 0;
    }

    Arithmatic(int A,int B)
    {
        cout<<"Inside parameterized constructor\n";
        No1 = A;
        No2 = B;
    }
    ~Arithmatic()
    {
        cout<<"Inside destructor\n";
    }

    int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    int Substraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
};

int main()
{
    int iRet = 0;
    Arithmatic obj1;
    Arithmatic obj2(10,11);


    iRet = obj1.Addition();
    cout<<"Addition of obj1 is :"<<iRet<<"\n";

    iRet = obj1.Substraction();
    cout<<"Substraction of obj1 is :"<<iRet<<endl;

    iRet = obj2.Addition();
    cout<<"Addition of obj2 is :"<<iRet<<endl;

    iRet = obj2.Substraction();
    cout<<"Substraction of obj2 is :"<<iRet<<endl;

    return 0;
}