
// // SUM OF 2D ARAAYS IN C++ 

#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    int i,j;
    cout<<"Enter the number of Rows";
    cin>>rows;
    cout<<"Enter the numbe of columns";
    cin>>cols;
    int  a [rows][cols];
    cout<<"Enter the elements of araays ";
    for(i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            cin>>a[i][j];

        }
    }
    int sum=0;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum=sum+a[i][j];

        }
    }
    double average = static_cast<double>(sum) / (rows * cols);
    

    cout << "Average of the 2D array elements: " << average << endl;
    
}


// DONT IGNORE ERRORS 
// try {
//     performTask();
// } catch (...) {
//     // Do nothing
// }



// FOR CONTROLLING USE THIS METHOD
// try {
//     performTask();
// } catch (const std::exception& e) {
//     logError(e.what());
//     throw;
// }
