// #include <iostream>
// using namespace std ;

// int main() {
//     string str ;
//     cout<<"Enter a String for Encryption"<<endl ;
//     cin>>str;
//     cout<<"Encryption of String using XOR with 1"<<endl;
//     for (int i = 0;i<str.size();i++)
//     {
//         str[i] = str[i] ^ 127;
//     }
//     cout<<"String after Encryption is :"<<endl;
//     cout<<str;
//     return 0;
// }
#include <iostream>
using namespace std ;

int main() {
    string str ;
    cout<<"Enter a String for Encryption"<<endl ;
    cin>>str;
    cout<<"Encryption of String using XOR with 127"<<endl;
    for (int i = 0;i<str.size();i++)
    {
        str[i] = str[i] ^ 127;
    }
    cout<<"String after Encryption is :"<<endl;
    cout<<str;
    return 0;
}