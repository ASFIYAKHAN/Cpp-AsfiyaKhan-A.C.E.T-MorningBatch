#include<iostream>
using namespace std;
class Palindrome{
    public:
     int num,temp,div,rev=0;

    public:
     void pal(){
        cout<<"enter the number "<<endl;
        cin>>num;
        temp = num;
        while(num>0){
            div = num % 10;
            cout<<div;
            rev = rev * 10 + div;
            num = num / 10;
        }

        if(temp == rev){
            cout<<"\n"<<endl;
            cout<<"the number is palindrome \n"<<endl;
        }
        else{
            cout<<"the number is not palindrome \n"<<endl;
        }

     } 
};
int main(){
    Palindrome p1;
    p1.pal();

}