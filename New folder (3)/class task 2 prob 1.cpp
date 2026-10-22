#include <iostream>
using namespace std;

int main() {
    int temperature;
    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature > 30) {
        cout << "Result: Hot" << endl;
    } else {
        cout << "Result: Cold" << endl;
    }

    return 0;
}
