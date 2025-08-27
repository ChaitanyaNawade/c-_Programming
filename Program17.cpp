#include<iostream>
using namespace std;

void Swap(int *No1 , int *No2)
{
     int temp = *No1;
    *No1 = *No2;
    *No2 = temp;
}

int main()
{
    int A = 10;
    int B = 20;

    cout<<"Before calling the swap function the value of a & b are : "<<A<<" "<<B<<" "<<"\n";

    Swap(&A,&B);

    cout<<"After calling the swap function the value of a & b are : "<<A<<" "<<B<<" "<<"\n";

    return 0;
}