#include<iostream>
#include<string>
using namespace std;

class Taimoor {
    private:
    string name ;
    string model;
    string color;
    int price;

// // PARAMETRIZED  CONSTRUCTOR 
    public:
    Taimoor (const string&name, const string&model, const string&color, int  price){
        this-> name = name;
        this->model = model;
        this->color = color;
        this->price = price;
    }
    void display (){
        cout << "Name :"<< name << endl;
        cout << "ModeL : " << model << endl;
        cout << "Color :" << color << endl;
        cout << "Price : " << price << endl;

    }

};
int main(){
    Taimoor t1("City", " VXR", "Black",300000);
    cout << "Car Information : " << endl;
    t1.display();

}