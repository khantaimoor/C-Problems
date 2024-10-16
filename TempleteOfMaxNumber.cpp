#include<iostream>
using namespace std;
template<typename T>
T maximum(T a, T b)
{
    return (a>b) ? a:b;

}
int main()
{
     int intMax   = maximum(3,5); 
    double doublemax= maximum(3.34,7.45);

    cout << "Adding of Number without dashes : "<< intMax << endl;
    cout << "Adding of Number with dashes : "<< doublemax << endl;
}