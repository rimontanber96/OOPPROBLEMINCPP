#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }

    int operator==(Complex c) {
        if (real == c.real && imag == c.imag)
            return 1;   // true
        else
            return 0;   // false
    }

  
};

int main() {
    Complex c1(2, 3), c2(3, 3);

    if (c1 == c2)
        cout << "c1 and c2 are equal\n";
    else
        cout << "c1 and c2 are not equal\n";


}
