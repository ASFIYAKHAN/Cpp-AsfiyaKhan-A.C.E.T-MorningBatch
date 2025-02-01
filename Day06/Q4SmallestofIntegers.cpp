#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three numbers"<<endl;
    cin>>a>>b>>c;
    if(a < b && a < c ){
        cout<<a<<"is the smallest number"<<endl;
    }
    else if(c < a && c < b){
        cout<<c<<"is the smallest number"<<endl;
    }
    else{
        cout<<b<<"is the smallest number"<<endl;
    }
}