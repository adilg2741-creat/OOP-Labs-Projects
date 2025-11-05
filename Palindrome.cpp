#include <iostream>
using namespace std;

// Function to check if number is palindrome
bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    return (original == reversed);
}

int main() {
    int number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Function call
    if (isPalindrome(number)) {
        cout << "The number is a Palindrome." << endl;
    } else {
        cout << "The number is not a Palindrome." << endl;
    }

    return 0;
}
