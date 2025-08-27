#include<iostream>
using namespace std;

class Student 
{
    public :
    string Name;
    int Marks;
    int Roll_No;
    
    void AcceptInfo(string name,int marks,int rollno)
    {
        Name = name;
        Marks = marks;
        Roll_No = rollno;
    }

    void DisplayInfo()
    {
        cout<<"Name of student is : "<<Name<<endl;
        cout<<"Marks of student is : "<<Marks<<endl;
        cout<<"Roll NO of student is : "<<Roll_No<<endl;
    }

    void Result()
    {
        if(Marks >= 30)
        {
            cout<<"Student is pass\n";
        }
        else 
        {
            cout<<"Student is fail\n";
        }
    }
};

int main()
{
    string Name;
    int marks = 0;
    int RollNo = 0;
    
    Student sobj;

    int choice = 0;
    do
    {
        cout<<"______________________________________________________________\n";
        cout<<"______________________________________________________________\n";
        cout<<"___________________Student management system__________________\n";
        cout<<"______________________________________________________________\n";
        cout<<"______________________________________________________________\n";
        cout<<"___________________Choose appropriate option__________________\n";
        
        cout<<"1 : To enter the  data of student\n";
        cout<<"2 : to Display info of student\n";
        cout<<"3 : to check the result of the student\n";
        cout<<"4 : exit\n";
        cin>>choice;

        switch(choice)
        {
            case 1 :
            {
                cout<<"Enter the name of student\n";
                cin>>Name;

                cout<<"Enter the marks of student\n";
                cin>>marks;

                cout<<"Enter the roll no of students\n";
                cin>>RollNo;

                sobj.AcceptInfo(Name,marks,RollNo);
                break;
            }

            case 2:
            {
                sobj.DisplayInfo();
                break;
            } 

            case 3:
            {
                sobj.Result();
                break;
            }

            case 4 :
            {
                cout<<"Thanks for using our applicaiton\n";
                break;
            }

        }
    }while(choice != 4);
    return 0;
}