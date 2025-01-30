#include<iostream>
using namespace std;
class reverse{
    public:
     int num,reve,div;

    public:
     void rev(){
        cout<<"enter the number "<<endl;
        cin>>num;
    
        while(num>0){
            div = num % 10;
            cout<<div;
            num = num / 10;
        }

     } 
};
int main(){
    reverse r1;
    r1.rev();
}