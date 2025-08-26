#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    int &myref = x;

    x = 30; 

    cout<<"The value of x is :"<<x<<"\n";

    cout<<"The value of myref is :"<<myref<<"\n";
}