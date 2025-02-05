#include<iostream>
using namespace std;
class one{
    int a, b;
    int *ptr;

    public:
    one(int x,int y,int z){
        a = x;
        b = y;
        ptr = new int;
        *ptr = z;
    }
    public:
    void display(){
        cout<<" a = "<<*ptr<<endl;
        cout<<" b = "<<*ptr<<endl;
    }
};
int main(){
    one ;
    one(10,20,30);
}