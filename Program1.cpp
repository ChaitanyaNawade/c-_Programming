#include<iostream>

using namespace std;

class Demo
{
    public :
    int i ;

    Demo(int A)
    {
        this->i = A;
    }

    void DisplayDay()
    {
        switch(i)
        {
            case 1 :
            cout<<"Monday\n";
            break;

            case 2 :
            cout<<"Tuesday\n";
            break;

            case 3 :
            cout<<"Wednesday\n";
            break;

            case 4 :
            cout<<"Thursday\n";
            break;

            case 5 :
            cout<<"Friday\n";
            break;

            case 6 :
            cout<<"Saturday\n";
            break;

            case 7 :
            cout<<"Sunday\n";
            break;

            default :
            cout<<"Invalid Input Please enter the day between 1 to 7\n";
            break;
        }
    }
};

int main()
{
    int Day = 0;

    cout<<"Enter the day between 1 to 7"<<endl;

    cin>>Day;

    Demo dobj(Day);

    dobj.DisplayDay();

    return 0;
}