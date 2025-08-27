#include<iostream>
using namespace std;

void SetElements(int Arr[], int n)
{
    int i = 0;

    Arr[n];

    for(i = 0 ; i < n; i++)
    {
        cin>>Arr[i];
    }
}

void DisplayElements(int Arr[],int n)
{
    int i = 0;

    Arr[n];

    for(i = 0 ; i < n; i++)
    {
        cout<<Arr[i];
    }
}

int main()
{
    int iSize = 0,i = 0;
    
    cout<<"Enter the number of elements\n";

    cin>>iSize;

    int Arr[iSize];

    cout<<"Enter the "<<iSize<<" elements in the array\n";

    SetElements(Arr,iSize);

    DisplayElements(Arr,iSize);


    return 0;
}