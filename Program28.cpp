//This program illustrates the concept of Runtime polymorphism in c++
#include<iostream>
using namespace std;

class Demo
{
    public :

    virtual void Run()
    {
        cout<<"Inside the Demo Run\n";
    }

     void Gun()
    {
        cout<<"Inside the Demo Gun\n";
    }

   
};

class DemoX : public Demo 
{
    public :

    void Run()
    {
        cout<<"Inside the DemoX Mun\n";
    }

    void Gun()
    {
        cout<<"Inside the DemoX Gun\n";
    }

    void Sun()
    {
        cout<<"Inside the DemoX sun\n";
    }
};

int main()
{
    Demo *dobj = new DemoX;
    dobj->Run();
    dobj->Gun();
    dobj->Sun(); //Error
    return 0;
}