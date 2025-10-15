#include <bits/stdc++.h>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Constructor
    Student(string n = "NoName", int a = 0) {
        name = n;
        age = a;
    }

    // Pre-increment: ++s
    Student& operator++() {
        age++;
        return *this;
    }

    // Post-increment: s++
    Student operator++(int r) {
        Student temp = *this;
        age++;
        return temp;
    }

    // Pre-decrement: --s
    Student& operator--() {
        age--;
        return *this;
    }

    // Post-decrement: s--
    Student operator--(int) {
        Student temp = *this;
        age--;
        return temp;
    }

    // Display function
    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s("Rimon", 20);

    cout << "Initial: ";
    s.show();

    ++s;     // pre-increment
    cout << "After ++s: ";
    s.show();

    s++;     // post-increment
    cout << "After s++: ";
    s.show();

    --s;     // pre-decrement
    cout << "After --s: ";
    s.show();

    s--;     // post-decrement
    cout << "After s--: ";
    s.show();

    return 0;
}
