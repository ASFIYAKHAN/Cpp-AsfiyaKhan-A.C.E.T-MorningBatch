#include<iostream>
using namespace std;
class numbers{
    public:
    int n;
    public:
    void print(){
        cout<<"enter the number";
        cin>>n;
        for(int i=0;i<=n;i++){
            cout<<i<<endl;
        }
    }
};
int main(){
    numbers n1;
    n1.print();
}