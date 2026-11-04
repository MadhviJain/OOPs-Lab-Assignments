#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float cgpa;

public:

    // Default constructor
    Student()
    {
        name = "Unknown";
        rollNo = 0;
        cgpa = 0;
    }

    // Constructor with name and roll number
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        cgpa = 0;
    }

    // Constructor with name, roll number and CGPA
    Student(string n, int r, float c)
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "------------------" << endl;
    }
};

int main()
{
    Student s1;
    Student s2("Rahul", 101);
    Student s3("Madhvi", 102, 8.7);

    cout << "Object 1:" << endl;
    s1.display();

    cout << "Object 2:" << endl;
    s2.display();

    cout << "Object 3:" << endl;
    s3.display();

    return 0;
}