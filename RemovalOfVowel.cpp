#include<iostream>
using namespace std;
int main(){
    string alphabet;
    cout << "Enter the string :";
     getline(cin,alphabet);
    cout << alphabet; 
    for (int i=0;i<alphabet.length();i++)
    {
        if(alphabet[i]== 'a' || alphabet[i]== 'A')
        {
            continue;
        }
        else if (alphabet[i]== 'e' || alphabet[i]== 'E')
        {
            continue;
        }
        else if (alphabet[i]== 'i' || alphabet[i]== 'I')
        {
            continue;
        }
        else if (alphabet[i]== 'o' || alphabet[i]== 'O')
        {
            continue;
        }
        else if(alphabet[i]== 'u' || alphabet[i]== 'U')
        {
            continue;
        }
        else {
            cout<<alphabet[i];
        }

        
    }
}