#include<iostream>
using namespace std;
class Demo  
{
    public :
    int i,j,k;
    static int x;

    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }

    void Display()
    {
        cout<<"The value of i is :"<<i<<endl;
        cout<<"The value of j is :"<<j<<endl;
        cout<<"The value of k is :"<<k<<endl;
        cout<<"The value of x is :"<<x<<endl;
    }

    static void DisplayX()
    {
        // cout<<"The value of i is :"<<i<<endl;   static behaviour of class cannot access the non static bariables 
        // cout<<"The value of i is :"<<j<<endl;
        // cout<<"The value of i is :"<<k<<endl;  
        cout<<"The value of x is :"<<x<<endl;
    }
};

 int Demo :: x = 50;             //we have to initialize the static variable outside the class globaly

int main()
{
    Demo obj1,obj2;
    obj1.Display();
    obj1.DisplayX();
   

    obj2.Display();
    obj2.DisplayX();                    //calling the static behaviour with the help of obj 

    Demo :: DisplayX();                 //calling static behaviour with the help of class name 

    cout<<"The value of x is :"<<obj1.x<<endl;  //calling the stataic variable with the help of object
                                                //object of class can call the static as well as nonstatic both 

    return 0;
}