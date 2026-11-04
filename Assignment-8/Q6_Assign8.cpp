
#include <iostream>
using namespace std;

class Student {
    int marks[5];

public:
    void inputMarks() {
        try {
            cout << "Enter marks of 5 subjects:" << endl;

            for (int i = 0; i < 5; i++) {
                cin >> marks[i];

                if (marks[i] < 0 || marks[i] > 100) {
                    throw marks[i];
                }
            }

            int sum = 0;

            for (int i = 0; i < 5; i++) {
                sum += marks[i];
            }

            float average = sum / 5.0;

            cout << "Average Marks = " << average << endl;
        }

        catch (int x) {
            cout << "Exception: Invalid Marks!" << endl;
            cout << "Marks must be between 0 and 100." << endl;
            cout << "Invalid mark entered: " << x << endl;
        }
    }
};

int main() {
    Student s;

    s.inputMarks();

    return 0;
}
