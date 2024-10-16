#include<iostream>
using namespace std;

double raiseToPow(double, int); // function prototype

int main()
{
  double x;
  int i;
  cout << "Please enter the number which you want to enter: ";
  cin >> x;
  cout << "Please enter the square which you want to raise the power: ";
  cin >> i;
  cout << x << " raised to power " << i << " is equal to " << raiseToPow(x, i) << endl;
  return 0; 
}

double raiseToPow(double base, int exponent) // function definition
{
  double result = 1.0;
  for (int j = 0; j < exponent; j++) {
    result *= base;
  }
  return result;
}