#include <iostream>
using namespace std;

class Student 
{
public:
    int marks;

    // Constructor
    Student(int m = 0) 
	{
        marks = m;
    }

    // Overload '>' operator
    bool operator > (Student s) 
	{
        return marks > s.marks;
    }

    // Overload '<' operator
    bool operator < (Student s) {
        return marks < s.marks;
    }

    // Overload '==' operator
    bool operator == (Student s) 
	{
        return marks == s.marks;
    }
};

int main() 
{
    Student s1(80);
    Student s2(90);

    if (s1 > s2)
        cout << "Student 1 has higher marks." << endl;
    else if (s1 < s2)
        cout << "Student 2 has higher marks." << endl;
    else if (s1 == s2)
        cout << "Both students have equal marks." << endl;

    return 0;
}

