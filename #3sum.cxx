#include <iostream>

using namespace std;

// Function to add two numbers
double addNumbers(double num1, double num2) {
    return num1 + num2;
}

int main() {
    double num1, num2, sum;

    // Get the two numbers (you would typically call a function here to get user input)
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;


    sum = addNumbers(num1, num2); // Call the addNumbers function

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}