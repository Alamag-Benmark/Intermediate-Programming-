#include <iostream>

using namespace std;

// Function to get two numbers from the user
void getNumbers(double& num1, double& num2) {
    cout << "Enter two numbers:" << endl;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
}

int main() {
    double num1, num2;
    getNumbers(num1, num2); // Call the function to get the two numbers

    cout << "You entered: " << num1 << " and " << num2 << endl; //Optional: Display the entered numbers.

    return 0;
}