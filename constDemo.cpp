#include<iostream>
using namespace std;
class demo
{
    public:
    int i,j,k;
    const int x,y;

    demo():x(30),y(40)
    {
          i=10;
          j=20;
    }

   demo(int a,int b,int c,int d):x(c),y(d)
   {
    i=a,j=b;
   }



};

int main()
{ 
   demo obj1;
   cout<<"The value of x is :"<<obj1.x<<"\n";
    
   demo obj2(1,2,3,4);
   cout<<"values of obj1: "<<obj1.i<<"\t"<<obj1.j<<"\t"<<obj1.x<<"\t"<<obj1.y<<"\n";
   cout<<"values of obj2: "<<obj2.i<<"\t"<<obj2.j<<"\t"<<obj2.x<<"\t"<<obj2.y<<"\n";

    return 0;
}