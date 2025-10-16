#include <bits/stdc++.h>
using namespace std;

class Money {
    double amount;
    string currency;

public:
    // Constructor
    Money(double a = 0, string c = "BDT") {
        amount = a;
        currency = c;
    }

    // Operator +  (Add two Money objects)
    Money operator+(Money m) {
        if (currency != m.currency) {
            cout << "⚠️ Different currencies! Cannot add.\n";
            return *this;
        }
        return Money(amount + m.amount, currency);
    }

    // Operator -  (Subtract)
    Money operator-(Money m) {
        if (currency != m.currency) {
            cout << "⚠️ Different currencies! Cannot subtract.\n";
            return *this;
        }
        return Money(amount - m.amount, currency);
    }

    // Operator >  (Compare amounts)
    bool operator>(Money m) {
        return amount > m.amount;
    }

    // Operator <  (Compare amounts)
    bool operator<(Money m) {
        return amount < m.amount;
    }

    // Pre-increment (++m)
    Money& operator++() {
        amount++;
        return *this;
    }

    // Post-increment (m++)
    Money operator++(int notused ) {
        Money temp = *this;
        amount++;
        return temp;
    }

    // Display function
    void display() {
        cout << amount << " " << currency << endl;
    }
};

int main() {
    Money m1(5000, "BDT");
    Money m2(1500, "BDT");

    Money total = m1 + m2;      // যোগ
    Money diff = m1 - m2;       // বিয়োগ

    cout << "Total: "; total.display();
    cout << "Difference: "; diff.display();

    // Comparison
    if (m1 > m2) cout << "m1 is greater\n";
    else cout << "m2 is greater\n";

    // Pre-increment
    ++m1;
    cout << "After ++m1: "; m1.display();

    // Post-increment
    m1++;
    cout << "After m1++: "; m1.display();

    return 0;
}
