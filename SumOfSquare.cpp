#include<iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << "Please enter a positive integer: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    cout << "The sum of squares of integers from 1 to " << n << " is " << sum << endl;
    return 0;
}