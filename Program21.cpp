#include<iostream>
using namespace std;

class Demo
{
    private :
    int Balance;


    public :
    Demo(int initialBalance)
    {
        Balance = initialBalance;
    }

    void DisplayBalance()
    {
        cout<<"Initial Balance is"<<Balance<<"\n";
    }

    void Deposit(int Amount)
    {
        Balance = Balance + Amount;
    }

    void Withdraw(int Amount)
    {
        if(Balance >= Amount)
        {
            Balance = Balance - Amount;
        }
        else 
        {
            cout<<"insufficient fund\n";
        }
    }
};

int main()
{
   int initial = 0;
   cout<<"Enter your initial balance\n";
   cin>>initial;

   Demo dobj(initial);

   int Choice = 0;

   do
   {
    cout<<"Enter youe choice\n";
    cout<<"_____Atm Menu_____\n";
    cout<<"1 : show Balance\n";
    cout<<"2 : Deposit  Amount\n";
    cout<<"3 : Withdraw Amount\n";
    cout<<"4 : Exit\n";
    cin>>Choice;

    switch(Choice)
    {
        case 1 :
        {
        dobj.DisplayBalance();
        break;
        }

        case 2 :
        {
        int depo = 0;
        cout<<"Enter a amount which you want to deposit\n";
        cin>>depo;
        dobj.Deposit(depo);
        dobj.DisplayBalance();
        break;
        }

        case 3:
        {
        int WithAmount = 0;
        cout<<"Enter a amount whihc you wnat to withdraw\n";
        cin>>WithAmount;
        dobj.Withdraw(WithAmount);
        dobj.DisplayBalance();
        break;
        }

        default :
        {
           cout<<"Enter correct option\n";
           break;
        }
    }
    
   }while(Choice != 4);

    return 0;
}