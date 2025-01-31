#include<iostream>
using namespace std;
class one{
    public:
    int a,b;
    static int c;
    public:
    void set(int x, int y){
        a = x;
        b = y;
    }
    void display(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    static void print(){
        cout<<c<<endl;
    }

};
int one::c;

int main(){
    one obj1;
    obj1.set(2,3);
    obj1.display();
    obj1.print();
    one::print();
}