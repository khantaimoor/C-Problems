#include<iostream>
using namespace std;
double calculateareacircle(double radius );
double calculateareacircle(double radius ){
    const double PI=3.1456;
    return PI*radius*radius;

}
int main(){
    double radius;
    cout << "Enter the radius of the circle : ";
    cin >> radius;
    double area = calculateareacircle(radius);
    cout << "Area of the circle with " << radius << "Is" << area << endl;
}