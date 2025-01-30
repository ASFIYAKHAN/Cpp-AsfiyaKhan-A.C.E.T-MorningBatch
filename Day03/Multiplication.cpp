#include<iostream>
using namespace std;
class multiplication{
    public:
    int  num1;
    int num2;
    int num3;

    public:
    int mul(){
        cout<<"enter 2 numbers"<<endl;
        cin>>num1>>num2;
        num3 = num1 * num2;
        return num3;
    }
};
int main(){
    int r;
    multiplication a;
   r =  a.mul();
    cout<<"the multiplication is : "<<r<<endl;
}