#include <iostream>
using namespace std;

// Base class
class Person {
private:
    string name;
public:
    Person(string n)   {
        name=n;
    }
    void showName() { cout << "Name: " << name << endl; }
};

// Derived1 class (inherits from Person)
class Teacher : private Person {
private:
    string subject;
public:
    Teacher(string n, string s) : Person(n), subject(s) {}
    void showTeacher() {
        showName();           // Base class function
        cout << "Subject: " << subject << endl;
    }
};

// Derived2 class (inherits from Teacher)
class SeniorTeacher : public Teacher {
private:
    int experience;
public:
    SeniorTeacher(string n, string s, int exp) : Teacher(n, s) {
      experience=exp;
    }
    void showSenior() {
        showTeacher();       // Derived1 function
        cout << "Experience: " << experience << " years\n";
    }
};

int main() {
    SeniorTeacher st("Mr. Rimon", "Math", 15);
    st.showSenior();
    return 0;
}
