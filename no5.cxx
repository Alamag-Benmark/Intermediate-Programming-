#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << "--------------" << endl; // Separator for readability
    }
    return 0;
}