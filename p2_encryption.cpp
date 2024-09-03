#include<iostream>
using namespace std;
int main() 
{
    string str;
    cout<<"Enter a string to encrypt :";
    cin>>str;
    for(int i = 0 ; i<str.size(); i++)
    {
        str[i] = str[i]+3;
    }
    cout<<"Encrypt string is : ";
    cout<<str;
    for(int  i = 0 ;i<str.size();i++)
    {
        str[i]= str[i]-3;
    }

    cout<<"\nDecrypted string is :";
    cout<<str;
    return 0;
}