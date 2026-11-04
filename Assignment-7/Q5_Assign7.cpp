#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayInfo() {
        cout << "Vehicle Information" << endl;
    }
};

class Car : public Vehicle {
public:
    void displayInfo() override {
        cout << "Car: Four Wheeler" << endl;
        cout << "Fuel Type: Petrol" << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayInfo() override {
        cout << "Bike: Two Wheeler" << endl;
        cout << "Fuel Type: Petrol" << endl;
    }
};

class Bus : public Vehicle {
public:
    void displayInfo() override {
        cout << "Bus: Public Transport" << endl;
        cout << "Capacity: 40 Passengers" << endl;
    }
};

int main() {
    Vehicle *ptr;

    Car c;
    Bike b;
    Bus bus;

    ptr = &c;
    ptr->displayInfo();

    cout << endl;

    ptr = &b;
    ptr->displayInfo();

    cout << endl;

    ptr = &bus;
    ptr->displayInfo();

    return 0;
}
