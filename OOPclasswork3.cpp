#include <iostream>
using namespace std;

class Complex 
{
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex() 
	{
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i) 
	{
        real = r;
        imag = i;
    }

    // Binary operator overloading function
    Complex operator + (Complex obj) 
	{
        Complex temp;
        temp.real = real + obj.real;   // Add real parts
        temp.imag = imag + obj.imag;   // Add imaginary parts
        return temp;                   // Return resulting object
    }

    // Display function
    void display() 
	{
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() 
{
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    Complex c3;            // Object to store result
    c3 = c1 + c2;          // Calls operator+ function

    cout << "Result of addition: ";
    c3.display();

    return 0;
}

