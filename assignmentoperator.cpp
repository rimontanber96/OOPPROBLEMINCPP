/*In C++, the assignment operator (=) is used to copy data from one object to another after both have already been created.

👉 Example (normal use):

A obj1, obj2;
obj2 = obj1; // Assignment, not initialization


If you don’t define your own assignment operator, C++ automatically provides a default shallow copy assignment operator.

But sometimes you need a deep copy — especially when your class uses dynamic memory (pointers).

That’s when we overload the assignment operator (operator=) manually.

⚙️ 2️⃣ Syntax of Overloading the Assignment Operator
ClassName& operator=(const ClassName &obj);

🔍 Explanation:

ClassName& → return reference to current object (so that a = b = c; works properly)

const ClassName &obj → pass the right-hand object by const reference (avoid copy)

Inside the function → copy all the data members.*/

#include <bits/stdc++.h>
using namespace std;
class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Assignment Operator Overload
    Complex& operator=( Complex c) {
        real = c.real;
        imag = c.imag;
        return *this; // return current object
    }

    void display() {
        cout << real << " + " << imag << "\n";
    }
};

int main() {
    Complex c1(5, 10);
    Complex c2;
    c2 = c1; // calls overloaded operator=
    c2.display();

    return 0;
}
