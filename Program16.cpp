/*
this program illusrtares the concept of the call by pointer 
*/
#include<iostream>
using namespace std;

void ChangeValue(int *ptr)
{
    *ptr = 20;
}

int main()
{
    int a = 10;

    cout<<"Before calling the function the value of a is : "<<a<<"\n";

    ChangeValue(&a);

    cout<<"After calling the function the value of a is : "<<a<<"\n";

    return 0;
}