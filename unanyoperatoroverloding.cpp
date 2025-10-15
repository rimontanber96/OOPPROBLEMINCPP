/*
Unary operator হলো এমন অপারেটর যা একটি মাত্র operand-এর উপর কাজ করে।
উদাহরণ: ++, --, - (নেগেশন), ! (লজিক্যাল NOT), ~ (বিটওয়াইজ NOT)।
Overloading এর উদ্দেশ্য: আমাদের কাস্টম ক্লাসের জন্য এই operator-এর আচরণ পরিবর্তন করা।
Syntax (Member Function হিসেবে):
return_type operatorOp(); // Unary operator-এর জন্য parameter লাগবে না
উদাহরণ: Complex number-এর জন্য - operator overload করা।
Unary operators সাধারণত member function হিসেবে লেখা হয় (কিন্তু friend function ও ব্যবহার করা যায়)।
Important points:
যদি operator নতুন object return করে, তাহলে value দ্বারা return করতে হবে।
যদি operator বর্তমান object modify করে, তাহলে reference দ্বারা return করা ভালো।
*/
#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // 1️⃣ Unary minus: নতুন object return করে
    Complex operator-() {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;  // value দ্বারা return
    }

    // 2️⃣ Prefix ++: বর্তমান object modify করে এবং reference return করে
    Complex& operator++() {  // prefix ++
        real++;
        imag++;
        return *this;  // reference দ্বারা return
    }
};

int main() {
    Complex c1(3, 4);
    cout << "Original: ";
    c1.display();

    // Unary minus
    Complex c2 = -c1;  
    cout << "Negated (new object): ";
    c2.display();

    // Prefix ++
    ++c1;
    cout << "After ++ (modified object): ";
    c1.display();

    return 0;
}
