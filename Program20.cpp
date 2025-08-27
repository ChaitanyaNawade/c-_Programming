#include<iostream>
using namespace std;

int CountLength(string str)
{
    int iCount = 0;

    int i = 0;

    while(i < str.length()) 
    {
        iCount++;
        i++;
    }

    return iCount;
}


int CountVowels(string str)
{
    int i = 0;
    int iCount = 0;

    for(i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i]== 'I' || str[i]== 'i' || str[i]== 'o' || str[i]== 'O' || str[i]== 'u' || str[i]== 'U')
        {
            iCount++;
        }
    }

    return iCount;
}

int CountSpace(string str)
{
    int iCount = 0;
    int i = 0;

    while(i < str.length())
    {
        if(str[i] == ' ')
        {
            iCount++;
        }
        i++;
    }
    return iCount;
}

int main()
{
    int iRet = 0;

    string str = "Hello world";

    iRet = CountLength(str);

    cout<<iRet<<"\n";

    iRet = CountVowels(str);

    cout<<"The vowels in a string are : "<<iRet<<"\n";

    iRet = CountSpace(str);

    cout<<iRet;

    return 0;
}