#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Parameterized constructor
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    // Method to display details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "---------------------------" << endl;
    }
};

// Function to initialize and display array of objects
void initializeStudents() {
    // Array of 3 objects using parameterized constructor
    Student students[3] = {
        Student("Ali", 017, 88.5),
        Student("Sara", 023, 92.0),
        Student("Ahmed", 036, 79.3)
    };

    cout << "Displaying Student Details:\n\n";
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }
}

int main() {
    initializeStudents();
    return 0;
}

