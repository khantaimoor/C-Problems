#include<iostream>
using namespace std;

// Base class for addition
class Adder {
    int addend1, addend2, sum;
    public:
    void inputAddends()
    {
        cout << "Enter the first addend: " << endl;
        cin >> addend1;
        cout << "Enter the second addend: " << endl;
        cin >> addend2;

    }
    void showSum ()
    {
        sum = addend1 + addend2;
        cout << "The sum is: " << sum << endl;

    }

};

// Base class for subtraction
class Subtractor {
    int minuend, subtrahend, difference;
    public:
    void inputNumbers(){
        cout<<"Enter the minuend and subtrahend: ";
        cin>>minuend>>subtrahend;

    }
    void showDifference(){
        difference = minuend - subtrahend;
        cout<<"The difference is: "<<difference<<endl;

    }
};

// Derived class for multiplication
class Multiplier : public Adder, public Subtractor
{
    int factor1, factor2, product;
    public:
    void inputFactors(){
        cout << "Enter the two factors: ";
        cin >> factor1 >> factor2;

    }
    void showProduct() 
    {
        product = factor1 * factor2;
        cout << "The product is: " << product<< endl;

    }

};

int main(){
    Adder adderObj;
    adderObj.inputAddends();
    adderObj.showSum();

    Subtractor subtractorObj;
    subtractorObj.inputNumbers();
    subtractorObj.showDifference();

    Multiplier multiplierObj;
    multiplierObj.inputFactors();
    multiplierObj.showProduct();


}
