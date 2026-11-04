#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw b;
        }

        cout << "Division = " << a / b << endl;
    }

    catch (float x) {
        cout << "Exception: Division by zero is not allowed!" << endl;
    }

    return 0;
}
