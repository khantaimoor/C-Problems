#include<iostream>
#include <limits.h>
using namespace std;

class Stack {
    int capacity;
    int* arr;
    int top;

public:
    Stack(int c) {
        capacity = c;
        arr = new int[c];
        top = -1;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Overflow" << endl;
            return;
        }
        arr[++top] = data;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return arr[top--];
    }

    int topElement() {
        if (isEmpty()) {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top element: " << st.topElement() << endl;
    st.push(4);
    st.push(5);
    return 0;
}