#include<iostream>
using namespace std;
class Demo 
{
    public :
    void fun(int i)
    {
        cout<<"Base Fun\n";
    }
};

class DemoX :  public Demo
{
    public :
    void fun(int i,int j)
    {
        cout<<"Derived Fun\n";
    }
};


int main()
{
    DemoX dobj;
    dobj.Demo :: fun(11);
    dobj.fun(10,11);
    return 0;
}