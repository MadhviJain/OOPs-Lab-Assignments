
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw num;
        }
        else if (num > 100) {
            throw (float)num;
        }

        cout << "Valid number: " << num << endl;
    }

    catch (int x) {
        cout << "Exception: Negative number is not allowed!" << endl;
    }

    catch (float x) {
        cout << "Exception: Number cannot be greater than 100!" << endl;
    }

    return 0;
}
