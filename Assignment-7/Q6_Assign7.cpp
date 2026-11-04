#include <iostream>
using namespace std;

class BankAccount {
protected:
    float principal;

public:
    BankAccount(float p) {
        principal = p;
    }

    virtual void calculateInterest() = 0;
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(float p) : BankAccount(p) {}

    void calculateInterest() override {
        float interest = principal * 4 / 100;

        cout << "Savings Account Interest = "
             << interest << endl;
    }
};

class FixedDeposit : public BankAccount {
public:
    FixedDeposit(float p) : BankAccount(p) {}

    void calculateInterest() override {
        float interest = principal * 7 / 100;

        cout << "Fixed Deposit Interest = "
             << interest << endl;
    }
};

int main() {
    BankAccount *ptr;

    SavingsAccount s(15000);
    FixedDeposit f(15000);

    ptr = &s;
    ptr->calculateInterest();

    ptr = &f;
    ptr->calculateInterest();

    return 0;
}
