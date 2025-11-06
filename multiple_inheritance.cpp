#include <iostream>
using namespace std;

// 1️⃣ Base Class 1
class Base1 {
private:
    int a;               
public:
    Base1(int x) { a = x; }
    void showA() { cout << "A = " << a << endl; }
};

// 2️⃣ Base Class 2
class Base2 {
private:
    int b;                
public:
    Base2(int y) { b = y; }
    void showB() { cout << "B = " << b << endl; }
};

// 3️⃣ Derived Class (Multiple + Private Inheritance)
class Derived : private Base1, private Base2 {
  private:
  int amount;

public:
    Derived(int x, int y,int a) : Base1(x), Base2(y) {
        amount=a;
    }   

   
    void showBoth() {
        showA();    // Base1 function
        showB();    // Base2 function
        cout<<amount<<endl;
    }
};

int main() {
    Derived d(10, 20,999);  
    d.showBoth();       
    return 0;
}
