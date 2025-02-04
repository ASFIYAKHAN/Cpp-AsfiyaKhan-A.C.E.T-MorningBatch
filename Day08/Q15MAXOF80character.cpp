#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    int count=1;
    cout<<"enter the string"<<endl;
    getline(cin,s1);

    for(int i = 0 ; i < s1['\0'];i++){
        
        if(s1[i] == ' '){
           count++;
        }
    }
    cout<<"the number of words in the sentence is "<<count-1<<endl;
}