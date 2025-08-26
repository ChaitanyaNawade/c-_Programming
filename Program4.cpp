#include<iostream>
using namespace std ;
int main()
{
    int iSize = 0,iCnt = 0;

    cout<<"how many elements you want to enter in the array\n";

    cin>>iSize;

    int *Arr = new int[iSize];

    cout<<"Enter the"<<iSize<<"elements in the array"<<"\n";
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<"Enter "<<iCnt + 1<<" Element\n";
        cin>>Arr[iCnt];
    }

    return 0;
}