#include<bits/stdc++.h>
using namespace std;
class coo{
int ai;
int bi;
    public:
    coo(int a=0,int b=0){
        ai=a;
        bi=b;
    }
coo operator +(coo r){
    coo temp;
    temp.ai=ai+r.ai;
    temp.bi=bi+r.bi;
    return temp;

}
void display(){
    cout<<ai<< " "<<bi;
}

c1.operator+c2;

    
};
int main(){
    coo s1(10,20),s2(20,30);
    coo s3=s1+s2;
    s3.display();

}