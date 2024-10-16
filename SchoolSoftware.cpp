
#include <iostream>
#include <string>
using namespace std;

// Define the Student class
class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Constructor to initialize data members
    Student(string n, int rn, float m) {
        name = n;
        rollNumber = rn;
        marks = m;
    }

    // Method to display student information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }

    // Method to get the name of the student
    string getName() {
        return name;
    }
};

int main() {
    // Array to store 10 student objects
    Student students[10] = {
        Student("Alice", 101, 85.5),
        Student("Bob", 102, 78.0),
        Student("Charlie", 103, 92.5),
        Student("David", 104, 88.0),
        Student("Emily", 105, 95.5),
        Student("Frank", 106, 80.0),
        Student("Grace", 107, 87.5),
        Student("Henry", 108, 91.0),
        Student("Ivy", 109, 89.5),
        Student("Jack", 110, 84.0)
    };

    string searchName;
    cout << "Enter the name of the student to display: ";
    cin >> searchName;

    // Search for the student by name and display their information
    bool found = false;
    for (int i = 0; i < 10; ++i) {
        if (students[i].getName() == searchName) {
            students[i].display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with name '" << searchName << "' not found." << endl;
    }

    return 0;
}