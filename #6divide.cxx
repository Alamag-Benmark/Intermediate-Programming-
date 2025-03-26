#include <iostream>

using namespace std;

// Function to divide the first number by the second number
double divideNumbers(double num1, double num2) {
    if (num2 == 0) {
        cout << "Error: Cannot divide by zero." << endl;
        return 0; // Or throw an exception
    } else {
        return num1 / num2;
    }
}

int main() {
    double num1, num2, quotient;

    // Get the two numbers (you would typically call a function here to get user input)
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    quotient = divideNumbers(num1, num2); // Call the divideNumbers function

    cout << "The quotient of " << num1 << " and " << num2 << " is: " << quotient << endl;

    return 0;
}