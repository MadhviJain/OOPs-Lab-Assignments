#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person Constructor Called" << endl;
    }

    virtual ~Person() {
        cout << "Person Destructor Called" << endl;
    }
};

class Student : public Person {
public:
    Student() {
        cout << "Student Constructor Called" << endl;
    }

    ~Student() {
        cout << "Student Destructor Called" << endl;
    }
};

int main() {
    Person *ptr = new Student();

    cout << "Deleting Object " << endl;

    delete ptr;

    return 0;
}
