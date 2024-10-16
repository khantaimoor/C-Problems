#include<iostream>
using namespace std;
template<typename T>
T add(T first, T second)
{
    return first+second;

}
int main()
{
     int resultInt= add<int>(3,5); // THIS IS CLASS EXPLICITY

    double resultDouble= add<double>(3.34,7.45);

    cout << "Adding of Number without dashes : " << resultInt<<endl;
    cout << "Adding of Number with dashes : " << resultDouble<<endl;
}