// MULTI - DIMESIONAL ARRAY 
#include<iostream>
using namespace std;
int main(){
    int a[4][4];
    int i,j;
    cout<<"Enter the arrays number :";
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>a[i][j];

        }
        
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<a[i][j];

        }
        cout<<endl;
        
    }

}