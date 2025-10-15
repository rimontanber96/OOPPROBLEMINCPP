#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Operator overloading
    Complex operator+(Complex r) {
      return Complex (real+r.real,imag+r.imag);
    }

    // Normal function (no operator overloading)
    Complex add(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(1, 4);

    Complex c3 = c1 + c2;   // operator+() function automatically called
    Complex c4 = c1.add(c2); // normal function call

    cout << "Using operator overloading: ";
    c3.display();

    cout << "Using normal function: ";
    c4.display();

    return 0;
}
