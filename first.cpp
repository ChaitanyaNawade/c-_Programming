#include<iostream>
using namespace std;
class demo{
    public:
    int no;
    float f;
    double d;
};

 int main(){
   demo obj;
   obj.no=10;
   obj.f=10.20;
   obj.d=450.99999;

   cout<<obj.no<<"\n";
   cout<<obj.f<<"\n";
   cout<<obj.d<<"\n";
   

    return 0;
 }