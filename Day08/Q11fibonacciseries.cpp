#include<iostream>
using namespace std;
int main(){
    int n;
    int t1 = 0;
    int t2 = 1;
    int nterms = t1 + t2;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n == 1){
        cout<<n<<endl;
    }
    cout<<"fibonacci series is"<<endl;
    cout<<t1<<endl;
    cout<<t2<<endl;
    for(int i =3;i<n;++i){
        cout<<nterms<<endl;
        t1 = t2 ;
        t2 = nterms;
        nterms = t1 + t2;
    }
}