#include<iostream>
using namespace std;
class Demo 
{
    public :
    virtual void Fun() = 0;
};

class DemoX : public Demo 
{
    public:
    void Fun()
    {
        cout<<"Inside the Base Fun\n";
    }
};

int main()
{
    Demo *dp = new DemoX;
    dp->Fun();
    return 0;
}