#include<iostream>
using namespace std;
int main(){
    int n1, n2, gcd;
    cout<<"enter two numbers :"<<endl;
    cin>>n1;
    cin>>n2;

    for(int i =1; i<=n1 && i <= n2; ++i){

        if( n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    printf("the gcd of two number is : %d",gcd);
}