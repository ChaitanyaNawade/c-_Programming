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
  public :
  Demo()
  {
    i = 20;
    j = 30;
    k = 40;
  }
  friend void Display();
};
void Display()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
}
int main()
{
  Display ();

  return 0;
}