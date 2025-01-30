#include<iostream>
using namespace std;
class numbers{
    public:
    int a,b,c;
    public:
    void max(){
     cout<<"enter the 2 numbers : "<<endl;
     cin>>a>>b;
     if(a > b){
        cout<<a<<" is greater "<<endl;
     }
     else{
        cout<<b<<" is greater "<<endl;
     }
    }
};
int main(){
    numbers n1;
    n1.max();
}