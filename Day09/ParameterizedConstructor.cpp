#include<iostream>
using namespace std;
class one{
    public:
    int a,b;
    public:
    one(int x, int y){
        a = x;
        b = y;
    }

    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main(){
    one obj1(10,20);
    one obj2(30,40);
    obj1.display();
    obj2.display();
}