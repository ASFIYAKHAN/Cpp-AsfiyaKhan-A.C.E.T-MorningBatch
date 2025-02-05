#include<iostream>
using namespace std;
class one{
    int a,b,c;
    int *ptr;
    public:
    one(int x,int y,int z){
       a = x;
       b = y;
       c = z;
       ptr = new int();
       *ptr = z;
    }
    ~one(){
        cout<<"i am destructor "<<endl;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};
int main(){
    one obj1(10,20,30);
    obj1.display();
}