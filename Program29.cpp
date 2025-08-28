/*
this Program illustrates the concept of Method overriding in c++ (OOP)

*/
#include<iostream>
using namespace std;
class Demo 
{
    public :
    int i,j;

    virtual void SetValue(int A,int B)
    {
        cout<<"Inside the Base SetValuef\n";
        this->i = A;
        this->j = B;
    }

    virtual void Fun()
    {
        cout<<"Base Fun\n";
    }

    void DisplayValue()
    {
        cout<<"Value of i is "<<i<<"\n";
        cout<<"Value of j is "<<j<<"\n";    
    }
};

class DemoX : public Demo 
{
    public :
    int k,L;

    void SetValue(int A,int B)
    {
        cout<<"Inside the derived SetValue\n";
        this->i = A*2;
        this->j = B*2;
        this->k = A;
        this->L = B;
    }

    void Fun()
    {
        cout<<"Derived Fun\n";
    }
};
int main()
{
    Demo *dp = new DemoX;
    dp->Fun();
    dp->SetValue(10,11);
    dp->DisplayValue();
    return 0;
}