#include <iostream>

using namespace std;

// Function to calculate the modulus of two numbers
int getModulus(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error: Cannot calculate modulus by zero." << endl;
        return 0; // Or throw an exception
    } else {
        return num1 % num2;
    }
}

int main() {
    int num1, num2, modulus;

    // Get the two numbers (you would typically call a function here to get user input)
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    modulus = getModulus(num1, num2); // Call the getModulus function

    cout << "The modulus of " << num1 << " and " << num2 << " is: " << modulus << endl;

    return 0;
}