//This Program illustrate the concept of this pointer 
#include<iostream>
using namespace std;

class Demo
{
    public :
    int x;

    void SetValue(int A)
    {
        this->x = A;
    }

    void GetValue()
    {
        cout<<x<<" \n";
    }
};

int main()
{
    int Value = 20;

    Demo dobj;

    dobj.SetValue(Value);

    dobj.GetValue();

    return 0;
}