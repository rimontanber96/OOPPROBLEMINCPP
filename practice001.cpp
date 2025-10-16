#include<bits/stdc++.h>
using namespace std;
class Money{
  int amount;
   string currency;
  public:
      Money(int a,string c){
        amount=a;
        currency=c;
      }
      Money operator + (Money r){
        return Money(amount+r.amount,currency);
      }
      Money operator -(Money r){
        return Money(amount-r.amount,currency);
      }
      Money operator ++(int ){
        Money temp=*this;
        amount++;
        return temp;
      }
     Money operator ++(){
      amount++;
      return *this;
    }

    bool operator>(Money r){
       return amount> r.amount;
    }
    bool operator<(Money r){
      return amount<r.amount;
    }

      void display(){
        cout<< amount <<" "<< currency;
      }


};
int main(){
      Money s1(1000,"Bdt"),s2(500,"Bdt");
      Money s3=s1+s2;
      Money s4=s1-s2;
      cout<<"Total Money:"; s3.display();
      cout<<endl;
      cout<<"Money Differece:";s4.display();
      cout<<endl;
      s1++;
      cout<<"after increment:";s1.display();
      cout<<endl;
      ++s1;
      cout<<"after increment:";s1.display();
      cout<<endl;
      if(s1>s2){
        cout<<"first people have more money";
      }
      else{
        cout<<" second people win";
      }
}
