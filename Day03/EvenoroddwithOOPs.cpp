#include<iostream>
using namespace std;
class student{
    public:
    int num1;
    public:
    void ISevenorodd(){
       cout<<"enter the number"<<endl;
       cin>>num1;

       if(num1 % 2 == 0){
        cout<<"the number is even "<<endl;
       }
       else if(num1 % 3 == 0){
        cout<<"the number is odd"<<endl;
       }
       else{
        cout<<"the number is neither even or odd"<<endl;
       }
    }

};
int main(){
    student s1;
    s1.ISevenorodd();
}