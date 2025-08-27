#include<iostream>
using namespace std;
class Hello
{
    public:
           void Display();
           void Accept();
};

class Demo
{
    public:
    int i;
    private :
    int j;
    protected :
    int k;

    public :
    Demo()
    {
      i=20;
      j=30;
      k=40;
    }
    friend class Hello;
};
 
void Hello::Display()
{
    Demo dobj;
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.k<<"\n";
}
void Hello::Accept()
{
    Demo dobj;
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.k<<"\n";
}
int main()
{
 Hello hobj;
 hobj.Display();
 hobj.Accept();
 return 0;
}