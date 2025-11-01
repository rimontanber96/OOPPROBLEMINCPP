#include<bits/stdc++.h>
using namespace std;
class base {
    int x;
public:
    void setx(int n)
     { x = n; }
    void showx() { cout << x << '\n'; }
};

class derived : public base {
    int y;
public:
    void sety(int n) { y = n; }
    void showy() { cout << y << '\n'; }
};

int main() {
    derived ob;
    ob.setx(10);   // base এর public function → এখনো public
    ob.sety(20);   // derived এর নিজের function
    ob.showx();    // base এর public function → এখনো public
    ob.showy();    // derived এর function
}
