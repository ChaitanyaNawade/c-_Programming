#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int iSize = 0 , iCnt = 0;

    cout<<"How many element you want to enter  in the array\n";

    cin>>iSize;

    vector<int>Arr(iSize);

    cout<<"Enter "<<iSize<<" Element in the array\n";

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<"Enter "<<iCnt+1<<" Element\n";
        cin>>Arr[iCnt];
    }

    cout<<"Element from the array are\n";

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<" ";
    }
    return 0;
}