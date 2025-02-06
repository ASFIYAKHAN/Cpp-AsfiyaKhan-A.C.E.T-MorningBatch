#include<iostream>
using namespace std;
class one{
    public:
    int a,b;
    public:
    void set(int x, int y){
        a = x;
        b = y;
    }
    one operator + (one ob2){
        one temp;
        temp.a = a + ob2.a;
        temp.b = b + ob2.b;
    }
    void display(){
        cout<<a<<"  "<<b<<endl;
    }
};
int main(){
    one ob1,ob2,ob3;
    ob1.set(2,3);
    ob2.set(4,5);
    ob3 = ob1 + ob2;
    ob3.display();
}