#include<iostream>
using namespace std;

// Function to add two matrices
void addMatrix(int matrix1[2][2], int matrix2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrix(int matrix1[2][2], int matrix2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrix(int matrix1[2][2], int matrix2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};

    int addResult[2][2];
    int subtractResult[2][2];
    int multiplyResult[2][2];

    cout << "Matrix 1:" << endl;
    printMatrix(matrix1);

    cout << "Matrix 2:" << endl;
    printMatrix(matrix2);

    addMatrix(matrix1, matrix2, addResult);
    cout << "Addition Result:" << endl;
    printMatrix(addResult);

    subtractMatrix(matrix1, matrix2, subtractResult);
    cout << "Subtraction Result:" << endl;
    printMatrix(subtractResult);

    multiplyMatrix(matrix1, matrix2, multiplyResult);
    cout << "Multiplication Result:" << endl;
    printMatrix(multiplyResult);

    return 0;
}