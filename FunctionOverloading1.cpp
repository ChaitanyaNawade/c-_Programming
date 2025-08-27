#include<iostream>
using namespace std;

class demo{
    public: 
    int addition(int a,int b)                   //addition2@ii
    {                  
        cout<<"inside the first fun \n";
        return a+b;
    }

    int addition(int a,int b,int c){           //addition3@ii
        cout<<"inside the second function\n";
        return a+b+c;
    }
    
    int addition(float a,float b){             //addition2@ff
        cout<<"inside the third function\n";
        return a+b;
    }
};

int main(){
    demo obj;
    cout<< obj.addition(10,11)<<"\n";           
    cout<< obj.addition(10,11,20)<<"\n";
    cout<< obj.addition(10.5f,20.5f)<<"\n";

    return 0;
}