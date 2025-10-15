#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) { real=r; imag=i;}

    // + operator overloading
    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex a(2,3), b(1,4), c(5,2);

    // 3 objects addition
    Complex sum = a + b + c;  // a+b returns Complex, then +c

    cout << "Sum of a, b, c: ";
    sum.display();

    return 0;
}
