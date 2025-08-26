#include<iostream>
using namespace std;

inline int square(int i)
{
    return i * i;
}

int main()
{
    int num = 5;

    int iRet = square(num);

    cout<<iRet<<"\n";

    return 0;
}