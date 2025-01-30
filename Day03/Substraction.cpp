#include<iostream>
using namespace std;
class substraction{
    public:
    int  num1;
    int num2;
    int num3;

    public:
    int sub(){
        cout<<"enter 2 numbers"<<endl;
        cin>>num1>>num2;
        num3 = num1 - num2;
        return num3;
    }
};
int main(){
    int r;
    substraction a;
   r =  a.sub();
    cout<<"the substraction is : "<<r<<endl;
}