#include<iostream>
using namespace std;

int CountNumbers(int *Arr,int iSize) // i can write here Arr[],*Arr 
{
    int iCount = 0;

    int i = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        iCount++;
    }
    return iCount;
}

int main()
{
    int iSize = 0,  iCnt = 0,iRet = 0;

    cout<<"How many elements you want to enter in the array\n";

    cin>>iSize;

    int *Arr = new int[iSize];

    cout<<"Enter the elements in the array\n";

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    iRet =  CountNumbers(Arr,iSize); //while calling function we have to just pass the array name

    cout<<"Total number of elements in the array are : "<<iRet<<"\n";

    return 0;
}