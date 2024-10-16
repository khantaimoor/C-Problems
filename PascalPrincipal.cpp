#include<iostream>
using namespace std;
int main(){
    for (int i=1;i<10;i++)
    {
        int k=1;
        for (int j=1;j<10;j++)
        {
            if (j<=i)
            {
                cout<<k;
                k=k*(i-j)/j;

            }
        }
        cout<<" \n";
    }
    cout<<endl;
}
