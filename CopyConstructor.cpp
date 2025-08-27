#include<iostream>
using namespace std;
class Demo
{
  public:
   int No1,No2;

   Demo()
   {
    cout<<"Indside default Constructor\n";
    this->No1 = 0;
    this->No2 = 0;
   }
   Demo(int A,int B)
   {
     cout<<"Indside parametrrized Constructor\n";
     this->No1 = A;
     this->No2 = B;
   }
   Demo(Demo &ref)
   {
      this->No1 = ref.No1;
      this->No2 = ref.No2;
      cout<<"Indside copy Constructor\n";
   }
   ~Demo()
   {
       cout<<"Indside destructor\n";
   }
};

int main()
{
   Demo obj1;
   Demo obj2(11,21);
   Demo obj3(obj2);
   cout<<obj1.No1<<"\t"<<obj1.No2<<"\n";
   cout<<obj2.No1<<"\t"<<obj2.No2<<"\n";
   cout<<obj3.No1<<"\t"<<obj3.No2<<"\n";
   return 0;
}