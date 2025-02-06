#include<iostream>
using namespace std;
class one {
    public:
    int a,b;
    void set(int x, int y){
        a = x;
        b = y;
    }
    void operator +(one &ob2){
        int c= a +ob2.a;
        int d= b +ob2.b;
        cout<<c<<"  "<<d<<endl;
    }
};
int main(){
    one ob1 , ob2;
    ob1.set(2,4);
    ob2.set(4,5);
    ob1 + ob2;
}