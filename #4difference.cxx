#include <iostream>

using namespace std;

// Function to subtract the second number from the first number
double subtractNumbers(double num1, double num2) {
    return num1 - num2;
}

int main() {
    double num1, num2, difference;

    // Get the two numbers (you would typically call a function here to get user input)
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    difference = subtractNumbers(num1, num2); // Call the subtractNumbers function

    cout << "The difference of " << num1 << " and " << num2 << " is: " << difference << endl;

    return 0;
}