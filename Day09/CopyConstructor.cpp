#include<iostream>
using namespace std;
class one{
    int a,b;

    public:
    one(int x, int y){
        a = x;
        b = y;
    }
    one(one &obj1){
        a = obj1.a;
        b = obj1.b;
    }

    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main(){
    one obj1(10,2);
    one obj2(obj1);
    obj1.display();
    obj2.display();
}