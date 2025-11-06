/*Hybrid inheritance সাধারণত complex systems এ ব্যবহার করা হয়।
এক Base class multiple times inheritance হলে diamond problem দেখা দিতে পারে।
Diamond problem solve করতে হয় virtual inheritance দিয়ে।*/
#include <iostream>
using namespace std;

// Base class
class Person {
private:
    string name;
public:
    Person(string n)  {
      name=n;
    }
    void showName()
     { cout << "Name: " << name << endl; }
};

// Derived1 (Student) → Single Inheritance
class Student : private Person {
private:
    int grade;
public:
    Student(string n, int g) :  Person(n) {
        grade=g;
    }
    void showStudent() {
        
        cout << "Grade: " << grade << endl;
    }
};

// Derived2 (Staff) → Single Inheritance
class Staff : private Person {
private:
    string position;
public:
    Staff(string n, string p) : Person(n) {
        position=p;
    }
    void showStaff() {
     
        cout << "Position: " << position << endl;
    }
};

// HybridDerived → Multiple Inheritance from Student & Staff
class HeadBoy : private Student, private Staff {
public:
    HeadBoy(string n, int g, string p) : Student(n, g), Staff(n, p) {

    } // Base Person constructor called twice
    void showHeadBoy() {
       

        showStudent();
        showStaff();
    }
};
 

int main() {
    HeadBoy hb("Shanto", 10, "Head Boy");
    hb.showHeadBoy();
    return 0;
}
