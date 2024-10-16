
#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    for (int i = 0; i < str.length(); ++i) {
        if (islower(str[i])) {  
            if (str[i] == 'a') { 
                str[i] = 'Z';
            } else {
                str[i] = toupper(str[i]) - 1;
            }
        }
    }

    cout << "Converted string: " << str << endl;

    return 0;
}