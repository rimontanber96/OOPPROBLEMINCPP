#include <iostream>
using namespace std;

class Base {
private:
    int x;
public:
    Base(int n) {
        x = n;
        cout << "Base constructor called, x = " << x << endl;
    }
    void showx() { cout << "x = " << x << endl; }
};

class Derived : public Base {
private:
    int y;
public:
    // ✅ Base constructor initializer list এর মাধ্যমে call করা হলো
    Derived(int a, int b) : Base(a) {  
        y = b;
        cout << "Derived constructor called, y = " << y << endl;
    }

    void showAll() {
        showx();
        cout << "y = " << y << endl;
    }
};

int main() {
    Derived ob(10, 20);
    ob.showAll();
    return 0;
}
