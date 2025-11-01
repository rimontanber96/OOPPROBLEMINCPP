#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
private:
    int priv = 2;
protected:
    int prot = 3;
};

// public inheritance
class Derived1 : public Base {
public:
    void show() {
        cout << pub << endl;   // ✅ allowed
        // cout << priv << endl; // ❌ not allowed
        cout << prot << endl;  // ✅ allowed (protected)
    }
};

// private inheritance
class Derived2 : private Base {
public:
    void show() {
        cout << pub << endl;   // ✅ allowed (becomes private)
        cout << prot << endl;  // ✅ allowed (becomes private)
    }
};

int main() {
    Derived1 d1;
    d1.show();
    cout << d1.pub << endl; // ✅ public

    Derived2 d2;
    d2.show();
    // cout << d2.pub << endl; // ❌ private now
}
