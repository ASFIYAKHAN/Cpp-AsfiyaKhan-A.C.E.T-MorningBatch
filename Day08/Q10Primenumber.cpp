#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if((n==1)||(n==2) ||(n==3)){
        cout<<n<<" is neither prime nor composite"<<endl;
    }
    else if ((n % 2 ==0) || (n % 3 == 0)){
        cout<<n<<" is not a prime number"<<endl;
    }
    else{
        cout<<n<<" number is prime"<<endl;
    }
}