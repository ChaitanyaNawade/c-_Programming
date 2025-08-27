//This program illustrates the concept of call by reference where the updation in the function changes the value of 
// a in main function
#include<iostream>
using namespace std;

void change(int &x)
{
    x = x +10;

}

int main()
{
    int a = 10;
    cout<<"Before calling the function\n";
    cout<<a<<"\n";
    change(a);
    cout<<"After changin \n";
    cout<<a<<"\n";
    return 0;
}