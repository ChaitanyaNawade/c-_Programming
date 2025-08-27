#include<iostream>
using namespace std;

class Demo
{
    public :
    int i,j;
     
    Demo(int a=0 ,int b=0)
    {
        i=a;
        j=b;
    }

    void Display()
    {
        cout<<i<<"\t"<<j<<"\n";
    }
};
int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,51);

    obj1.Display();
    obj2.Display();
    obj3.Display();


   
    
    return 0;
}