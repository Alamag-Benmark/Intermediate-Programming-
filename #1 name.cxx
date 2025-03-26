#include <iostream>
#include <string>

using namespace std;

// Function to input and display the user's name
string getName() {
    string name;
    cout << "Enter your name: ";
    getline(cin >> ws, name); // Use getline to handle spaces in names
    cout << "Hello, " << name << "!" << endl;
    return name;
}

int main() {
    string userName = getName(); // Call the function to get and display the name
    return 0;
}