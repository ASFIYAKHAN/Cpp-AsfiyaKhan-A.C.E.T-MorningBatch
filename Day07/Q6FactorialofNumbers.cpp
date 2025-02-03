#include<iostream>
using namespace std;
class Factorial{
    public:
    int fact;

    Factorial(){
        int n;
        cout<<"enter the number"<<endl;
        cin>>n;
        fact = n;
        for(int i=1;i<n;i++){
            fact = fact * i;
        }
        cout<<"the factorial of "<<n<<" is : "<<fact<<endl;
    }
};
int main(){
    Factorial f1;

}