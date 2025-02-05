#include<iostream>
using namespace std;
class One{
    public:
    int a,b;
    public:
    One(){
        a = 10;
        b = 20;
    }

    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main(){
    One obj1;
    obj1.display();

}