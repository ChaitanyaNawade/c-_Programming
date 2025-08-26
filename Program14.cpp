// This Program also illusrtates the concept of the dangling pointer

#include<iostream>
using namespace std;

int main()
{

    int *ptr = NULL;

    {
        int a = 10;
        ptr = &a;
    }

    cout<<*ptr;


    return 0;
}