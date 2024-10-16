// STIRNG WITH LOWER CASE LETTER 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string with upper case letter : ";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
    }
    cout<<"String with uper case letter to lower case letter converted : \n";
    cout<<str<<endl;
}