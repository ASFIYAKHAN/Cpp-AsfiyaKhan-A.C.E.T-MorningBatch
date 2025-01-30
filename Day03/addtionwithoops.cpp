#include<iostream>
using namespace std;
class addition{
    public:
    int  num1;
    int num2;
    int num3;

    public:
    int add(){
        cout<<"enter 2 numbers"<<endl;
        cin>>num1>>num2;
        num3 = num1 + num2;
        return num3;
    }
};
int main(){
    int r;
    addition a;
   r =  a.add();
    cout<<"the addition is : "<<r<<endl;
}