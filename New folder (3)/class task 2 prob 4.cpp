#include <iostream>
using namespace std;

int main() {
    int password;
    int correctPassword = 1234;
    
    cout << "Enter the password: ";
    cin >> password;

    if (password == correctPassword) {
        cout << "Access granted" << endl;
    } else {
        cout << "Access denied" << endl;
    }

    return 0;
}
