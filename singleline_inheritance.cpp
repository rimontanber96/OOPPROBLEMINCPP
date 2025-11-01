/*১️⃣ Single Inheritance
Theory:

এক Derived class একটি Base class থেকে উত্তরাধিকার (inheritance) পায়।

সহজতম inheritance type।

Base class এর members (public/protected) Derived class এ চলে আসে।

Use:

যখন একটি class অন্য class এর functionality শুধুমাত্র একবার ব্যবহার করতে চায়।*/
#include <iostream>
using namespace std;

class Person {
private:
    string name;
public:
    Person(string n) {
        name=n;
    }
    void showPerson() { cout << "Name: " << name << endl; }
};

class Teacher : private Person { // private inheritance
  private:
  int roll;
    public:
    Teacher(string n,int r):Person(n){
      roll=r;
    }
    void showTeacher() { 
        showPerson();
    cout<<roll<<endl;
 }
};

int main() {
    Teacher t("Rimon",22);
    t.showTeacher();
}
