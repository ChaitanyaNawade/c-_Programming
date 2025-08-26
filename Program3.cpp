//This program is used to illustrate the concept of vector from the STL standard 
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> arr = { };
    int n = 0;
    int i = 0;

    cout<<"How many element you want to enter in the vector\n";

    cin>>n;

    cout<<"Enter the elements\n";

    for(i = 0 ; i < n ;i++)
    {
        cout<<"Enter"<<" "<<i<<" "<<"element"<<"\n";
        int x;
        cin>>x;
        arr.push_back(x);
    }

    char choice;
    do 
    {
        cout<<"Do you want to add extra elements\n";
        cin>>choice;

        if(choice == 'y' || choice == 'Y')
        {
            int extra ;
            cout<<"enter new element\n";
            cin>>extra;
            arr.push_back(extra);
        }
    }while(choice == 'y' || choice == 'Y');

    
    cout<<"The elements are\n";

    for(auto n : arr)
    {
        cout<<n<<" ";
    }


    return 0;
}