//This program illusrates the concept of the dangling pointer

#include<iostream>
using namespace std;

int *Fun()
{
     static int X = 10;

    return &X;
}

int main()
{
    int *ptr = Fun();
    cout<<*ptr<<"\n";
}