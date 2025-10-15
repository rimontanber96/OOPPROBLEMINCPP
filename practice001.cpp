#include<bits/stdc++.h>
using namespace std;
class Student {
           int age;
           public:
           Student(int a){
            age=a;
           }
        Student &operator++(){
            age++;
            return *this;
        }
        Student operator++(int used){
            Student temp=*this;
            age++;
            return *this;
        }
      void display(){
        cout<<age<<endl;
      }
};
   int main(){
    Student s1(100);
    Student s2(10);
    Student s4=s2++;
    Student s3=++s1;
   s4.display();
   s3.display();

   }