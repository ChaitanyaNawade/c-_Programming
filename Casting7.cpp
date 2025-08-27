#include<iostream>
using namespace std;

class Base
{
    public :
    int i,j;
    virtual void fun()
    {
        cout<<"Base fun"<<"\n";
    }

     virtual void gun()
    {
        cout<<"Base gun"<<"\n";
    }

     virtual void sun()
    {
        cout<<"Base sun"<<"\n";
    }

     void run()
    {
        cout<<"Base run"<<"\n";
    }

};

class Derived : public Base
{
    public : 
    int x,y;
    void fun()
    {
        cout<<"Derived fun\n";
    }

   virtual void gun()
    {
        cout<<"Derived gun\n";
    }

   virtual void run()
    {
        cout<<"Derived run\n";
    }
   virtual  void mun()
    {
        cout<<"Derived mun\n";
    }
};

int main()
{
    Base *ptr = NULL;
    Derived dobj;
    ptr = &dobj;

    ptr ->fun();
    ptr ->gun();
    ptr->run();
    ptr->mun();

    return 0;
}