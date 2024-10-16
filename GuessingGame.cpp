#include<iostream>
using namespace std;

int main()
{
    int tryNum = 0;
    char c;

    do {
        cout << "Please enter a single alphabet (A-Z): ";
        cin >> c;

        if (isalpha(c) && c >= 'A' && c <= 'Z' && cin.get() == '\n') {
            cout << "Congratulations! You are correct!" << endl;
            break;
        } else {
            cout << "Invalid input. Try again." << endl;
            tryNum++;
            cin.clear(); // clear the input buffer
            cin.ignore(numeric_limits<streamsize>::maximum(), '\n'); // ignore the rest of the input line
        }
    } while (tryNum <= 5);

    if (tryNum > 5) {
        cout << "Sorry, you are a loser! Better luck next time." << endl;
    }

    return 0;
}