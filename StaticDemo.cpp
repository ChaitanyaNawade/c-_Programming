#include<iostream>
using namespace std;

class Demo
{
  public :
    int i,j,k;
    static int x;


    Demo()
    {
        i=10; j=20; k=30;
    }


    void Display()
    {
        cout<<"Inside Display\n";
        cout<<i<<"\t"<<j<<"\t"<<k<<"\n";
    }


    static void Help()
    {
        cout<<"Inside Help\n";
    }
};

int Demo::x = 51; // if there is static variable in class then it should be initialized after class

int main()
{   
    Demo::Help();
    cout<<"The value of X is:"<<Demo::x<<"\n";

    Demo obj1,obj2;
    obj1.Display();
    obj2.Display();

    cout<<"The value of i inside obj1 is :"<<obj1.i<<"\n";
    cout<<"The value of i inside obj2 is :"<<obj2.i<<"\n";

    obj1.Help();
    cout<<"the value of static X is :"<<obj1.x<<"\n"; 
    return 0;
}



