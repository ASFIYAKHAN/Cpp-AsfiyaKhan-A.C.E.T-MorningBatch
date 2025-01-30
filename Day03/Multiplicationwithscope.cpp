#include<iostream>
using namespace std;
class student{
    public:
    int num1,num2,num3;
    public:
    void collect();
    void calculate();
    void display();

};
 void student::collect(){
    cout<<"enter 2 number :";
    cin>>num1>>num2;
}
void student ::calculate(){
    num3 = num1*num2;
}
void student ::display(){
    cout<<"the multiplication of two numbers are : "<<num3<<endl;
}
int main(){
    student s1;
    s1.collect();
    s1.calculate();
    s1.display();
}