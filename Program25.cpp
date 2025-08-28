#include<iostream>
using namespace std;
class A 
{
    public :
    void Show()
    {
        cout<<"Inside the show of A\n";
    }
};

class B 
{
    public :
    void Run()
    {
        cout<<"Inside the Run of B\n";
    }
};

class C : public B, public A
{
    public :
    void Mun()
    {
        cout<<"Inside the Mun of C\n";
    }
};
int main()
{
    C cobj;
    cobj.Mun();
    cobj.Run();
    cobj.Show();
    return 0;
}