#include<iostream>
using namespace std;
class one{
    public:
    int a,b;

    void set(int x,int y){
        a = x;
        b = y;
    }
    void operator ++(){
        a = ++a;
        b = ++b;
    }

    void dis(){
        cout<<a<<"  "<<b<<endl;
    }
};
int main(){
    one obj;
    obj.set(3,4);
    ++obj;
    obj.dis();
}