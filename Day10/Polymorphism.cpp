#include<iostream>
using namespace std;
class one{
    private: 
    int a,b;

    public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void dis(){
        cout<<a<<"  "<<b<<endl;
    }
};
int main(){
    one obj1;
    obj1.set(2,3);
    obj1.dis();
}