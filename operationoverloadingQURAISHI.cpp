#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
          Complex(int r,int i){
            real=r;
            imag=i;
          }
          //with object+object;
          Complex operator+(Complex r){
            return Complex(real+r.real,imag+r.imag);
          }
        //with object and value ; 
        Complex operator +(int val){
            return Complex (real+val,imag);
        }
      friend Complex operator+(int val,Complex c){
               return Complex(c.real+val,c.imag);
        }
          void display(){
            cout<<real<< " "<<imag<<endl;
          }

};
int main(){
    Complex s1(10,20), s2(100,200);
    Complex s3=s1+s2;
    Complex s4=s1+7;
    Complex s5=7+s1;
    cout<<"With object + object:  ";
     s3.display();
     cout<<"with object + int value:  ";
     s4.display();
     cout<<" with value + object:  ";
     s5.display();
}