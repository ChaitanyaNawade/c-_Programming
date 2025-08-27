#include<iostream>
using namespace std;

class BankAccount
{
    private :
    string Name;
    int Balance ;

    public :
    void SetDetails(string name,int balance)
    {
        Name  = name ;
        Balance = balance;
    }

    void Deposit(int Amount)
    {
        Balance = Balance + Amount;
    }

    void Withdraw(int Amount)
    {
        int Withdraw = 0;
        if(Balance >= Amount)
        {
            Balance = Balance - Amount;
        }
        else
        {
            cout<<"Insufficient funds\n";
        } 
    }

    void DisplayBalance()
    {
        cout<<"Your balance is "<<Balance<<"\n";
    }
};

int main()
{
    BankAccount bobj;

    int choice = 0;

    do
    {
        cout<<"_______________________________________________________\n";
        cout<<"_______________________________________________________\n";
        cout<<"___________________Bank management system______________\n";
        cout<<"_______________________________________________________\n";
        cout<<"_______________________________________________________\n";

        cout<<"___________________choose appropriate option____________\n";
        cout<<"1 : to enter the details of the customer\n";
        cout<<"2 : to Check the balance\n";
        cout<<"3 : to Deposit the amount\n";
        cout<<"4 : to withdraw the amount\n";
        cout<<"5 : Exit\n";
        cout<<"_______________________________________________________\n";
        cout<<"_______________________________________________________\n";
        cin>>choice;

        switch(choice)
        {
            case 1 :
            {
                string name;
                int balance = 0;

                cout<<"Enter the name of accountholder\n";
                cin>>name;

                cout<<"Enter the balance \n";
                cin>>balance;

                bobj.SetDetails(name,balance);
                break;
            }
            case 2:
            {
                bobj.DisplayBalance();
                break;
            }
            case 3:
            {
                int DepositAmt = 0;
                cout<<"Enter the amount which you want to deposit\n";
                cin>>DepositAmt;
                bobj.Deposit(DepositAmt);
                bobj.DisplayBalance();
                break;
            }
            case 4:
            {
                int WithAmt = 0;
                cout<<"Enter the amount which you want to withdraw\n";
                cin>>WithAmt;

                bobj.Withdraw(WithAmt);
                bobj.DisplayBalance();
                break;
            }
            case 5:
            {
                cout<<"Thank you for using our application\n";
                break;
            }
        }

    }while(choice != 5);
    return 0;
}