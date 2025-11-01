#include <iostream>
using namespace std;

// Base class
class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Single Inheritance
class Teacher : private Person {
    string subject;
public:
    Teacher(string n, int a, string s) : Person(n, a), subject(s) {}
    void showTeacher() {
        showPerson();
        cout << "Subject: " << subject << endl;
    }
};

// Another Base class for Multiple Inheritance
class Staff {
protected:
    string position;
public:
    Staff(string p) : position(p) {}
    void showStaff() { cout << "Position: " << position << endl; }
};

// Multiple Inheritance
class Principal : public Person, public Staff {
public:
    Principal(string n, int a, string p) : Person(n, a), Staff(p) {}
    void showPrincipal() {
        showPerson();
        showStaff();
    }
};

// Multilevel Inheritance
class SeniorTeacher : private Teacher {
    int experience; // years
public:
    SeniorTeacher(string n, int a, string s, int exp) : Teacher(n, a, s), experience(exp) {}
    void showSeniorTeacher() {
        showTeacher();
        cout << "Experience: " << experience << " years\n";
    }
};

// Hierarchical Inheritance
class Student : private Person {
    int grade;
public:
    Student(string n, int a, int g) : Person(n, a), grade(g) {}
    void showStudent() {
        showPerson();
        cout << "Grade: " << grade << endl;
    }
};

// Hybrid Inheritance
class HeadBoy : private Student, private Staff {
public:
    HeadBoy(string n, int a, int g, string pos) : Student(n, a, g), Staff(pos) {}
    void showHeadBoy() {
        showStudent();
        showStaff();
    }
};

int main() {
    cout << "=== Single Inheritance ===\n";
    Teacher t1("Mr. Rimon", 40, "Math");
    t1.showTeacher();

    cout << "\n=== Multiple Inheritance ===\n";
    Principal p1("Mrs. Aonty", 50, "Principal");
    p1.showPrincipal();

    cout << "\n=== Multilevel Inheritance ===\n";
    SeniorTeacher st("Mr. Tanvir", 45, "Physics", 20);
    st.showSeniorTeacher();

    cout << "\n=== Hierarchical Inheritance ===\n";
    Student s1("Arif", 15, 9);
    s1.showStudent();

    cout << "\n=== Hybrid Inheritance ===\n";
    HeadBoy hb("Shanto", 16, 10, "Head Boy");
    hb.showHeadBoy();

    return 0;
}
