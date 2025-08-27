#include<iostream>
using namespace std;

class base
{
   public:
   int i,j;
   base()
   {
     cout<<"Base constructor\n";
   }
   ~base()
   {
    cout<<"Base destructor\n";
   }
};

class derived : public base
{
    public:
    int k;
    derived( ) //: k(0)
    {
        cout<<"Derived constructor\n";
        // cout<<"the value of k is:"<<k<<"\n";

    }
    ~derived()
    {
        cout<<"Derived destructor\n";
    }
};
int main(){

   base bobj;
   derived dobj;
   bobj.i = 11;
   bobj.j = 12;
   dobj.k=10;


   cout<<dobj.k<<"\n";
   cout<<bobj.i<<"\n";
   cout<<bobj.j<<"\n";


    return 0;
}