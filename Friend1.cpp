#include<iostream>
using namespace std;
class Demo
{
  public :
  int i;
  private :
  int j;
  protected :
  int k;

  public : //access specifier
  Demo()   //default constructor calling
  {
    i= 10;
    j= 20;
    k= 30;
  }
  friend void Display(); // to access the private and protected members i told to the compiler that the Display function is the frined function
};
void Display()
{
    Demo dobj;        // creating object of class demo
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.k<<"\n";
}

int main()
{
  Display(); //function call 
  
  return 0;
}