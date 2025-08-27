/*
this Program illustrates the concept of shadowing means if we declare a varibale globaly and,
we defined one more variable with same name inside the another function and we print that variable from that function ,
then the presedence get used there and the variable is get displayed on the screen which is get declared inside the ,
function.
*/
#include<iostream>
using namespace std;

int  a = 50;

void Display()
{
    int a = 100;
    cout<<a<<endl;
}

int main()
{
    cout<<a<<endl;

    Display();

    return 0;
}