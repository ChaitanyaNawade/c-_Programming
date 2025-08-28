#include<iostream>
using namespace std;

class Base 
{
    public :
    int i,j;

    void show()
    {
        cout<<"Value of i in A is : "<<i<<"\n";
        cout<<"Value of j in A is : "<<j<<"\n";
    }
};

class Base1 : public Base 
{
    public :
    int k;

    void Grow()
    {
        cout<<"Value of K inside the Base1 is "<<k<<"\n";
    }
};

class Base2 : public Base 
{
    public :
    int L;

    void Bro()
    {
        cout<<"The value of L inside the Base2 is : "<<L<<"\n";
    }
};
int main()
{
    Base2 bobj;
    bobj.show();
    bobj.Bro();

    Base1 bobjX;

    bobjX.show();
    bobjX.Grow();
    return 0;
}