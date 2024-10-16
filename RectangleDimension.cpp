
#include<iostream>
using namespace std;
 class Rectangle {
    private :
    int length;
    int width;

    public:
    Rectangle(int l, int w){
        length=l;
        width=w;

    }
     double calclulatearea(){
        return length*width;

     }

     double calculateperimeter(){
        return 2*(length+width);

     }
     void display()
     {
        cout << "Rectangle Dimension :" << endl;
        cout<< "Length :" << length << endl;
        cout << "width :" << width << endl;
        cout << "Area :" << calclulatearea() << endl;
        cout << "Perimeter : " << calculateperimeter() << endl;

     }

 };
 int main(){
    Rectangle r1(5.0,3.0);
    r1.display();

    Rectangle r2(7.4,4.9);
    r2.display();
 }



//GOOD CODE PARACTICE 
// const double PI = 3.14;

// double calculateArea(double radius) {
//     return PI * radius * radius;
// }


//BAD CODE PARACTIICE 
// double calculateArea(double radius) {
//     return 3.14 * radius * radius;
// }
