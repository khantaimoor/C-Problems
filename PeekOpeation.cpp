#include <iostream>
using namespace std;

const int SIZE = 10; // Define the size of the queue

int Queues[SIZE]; // Array to store queue elements
int front = -1; // Front of the queue
int rear = -1; // Rear of the queue

// Function to peek the front element of the queue
int Peek() {
    if (front == -1) {
        return 0;
    } else {
        return Queues[front];
    }
}

// Function to display the queue elements
void Display() {
    if (front == -1) {
        cout << "Queue Is Empty ";
    } else {
        cout << "Queue Elements :";
        for (int i = front; i <= rear; i++) {
            cout << Queues[i];
        }
    }
}

// Function to enqueue an element into the queue
void Enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow";
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        Queues[rear] = value;
    }
}

// Function to dequeue an element from the queue
void Dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow ";
    } else {
        cout << "Element deleted from queue is : " << Queues[front] << endl;
        front++;
    }
}

int main() {
    int choice;
    int value;

    do {
        cout << "1) Enqueue element to queue" << endl;
        cout << "2) Dequeue element from queue" << endl;
        cout << "3) Display all the elements of queue" << endl;
        cout << "4) Peek the front element of queue" << endl;
        cout << "5) Exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Insert the element in queue : ";
                cin >> value;
                Enqueue(value);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                cout << "Front element of queue is : " << Peek() << endl;
                break;
            case 5:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}