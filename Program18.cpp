#include<iostream>
using namespace std;

int main()
{
    int iSize = 0,i = 0;
    
    cout<<"Enter the number of elements\n";

    cin>>iSize;

    int Arr[iSize];

    cout<<"Enter the "<<iSize<<" elements in the array\n";

    for(i = 0 ; i < iSize ; i++)
    {
        cout<<"Enter "<<i + 1<<" Elemetn\n";
        cin>>Arr[i];
    }


    cout<<"elements from the array\n";

    for(i = 0 ; i < iSize ; i++)
    {
        cout<<Arr[i]<<" ";
    }
    
    return 0;
}