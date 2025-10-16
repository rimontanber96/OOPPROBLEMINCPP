#include <bits/stdc++.h>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student(string n = "NoName", int a = 0) {
        name = n;
        age = a;
    }

    
    Student& operator++() {
        age++;
        return *this;
    }

    
    Student operator++(int r) {
        Student temp = *this;
        age++;
        return temp;
    }


    Student& operator--() {
        age--;
        return *this;
    }

    
    Student operator--(int) {
        Student temp = *this;
        age--;
        return temp;
    }

    
    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s("Rimon", 20);

    cout << "Initial: ";
    s.show();

    ++s;     
    cout << "After ++s: ";
    s.show();

    s++;     
    cout << "After s++: ";
    s.show();

    --s;     
    cout << "After --s: ";
    s.show();

    s--;    
    cout << "After s--: ";
    s.show();

    return 0;
}
