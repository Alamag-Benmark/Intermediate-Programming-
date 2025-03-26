#include <iostream>

using namespace std;

// Function to multiply two numbers
double multiplyNumbers(double num1, double num2) {
    return num1 * num2;
}

int main() {
    double num1, num2, product;

    // Get the two numbers (you would typically call a function here to get user input)
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    product = multiplyNumbers(num1, num2); // Call the multiplyNumbers function

    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;

    return 0;
}