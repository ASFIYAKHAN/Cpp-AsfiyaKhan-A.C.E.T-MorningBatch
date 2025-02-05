#include<iostream>
using namespace std;
class one{
    public:
    int a;
    void set(){
        a = 5;
    }
    void display(){
        cout<<"a = "<<a<<endl;
    }
};
class two: public one{
    public:
    int b;
    void set(){
        b = 7;
    }
    void display(){
        cout<<"b = "<<b<<endl;
    }
};
int main(){
    two ob1;
    ob1.set();
    ob1.display();
}