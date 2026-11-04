#include <iostream>
using namespace std;

class LibraryAccount {
    int availableBooks;

public:
    LibraryAccount(int books) {
        availableBooks = books;
    }

    void issueBook(int amount) {
        try {
            if (amount > availableBooks) {
                throw amount;
            }

            availableBooks -= amount;

            cout << "Books issued successfully!" << endl;
            cout << "Remaining Books: "
                 << availableBooks << endl;
        }

        catch (int x) {
            cout << "Exception: Not enough books available!" << endl;
            cout << "Requested Books: " << x << endl;
            cout << "Available Books: " << availableBooks << endl;
        }
    }
};

int main() {
    LibraryAccount obj(10);

    int n;

    cout << "Available Books: 10" << endl;
    cout << "Enter number of books to issue: ";
    cin >> n;

    obj.issueBook(n);

    return 0;
}
