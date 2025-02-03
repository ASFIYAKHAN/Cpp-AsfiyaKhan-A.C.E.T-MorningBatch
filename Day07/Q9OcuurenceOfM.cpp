#include<iostream>
#include<string.h>
using namespace std;
int main(){
   string str;
   getline(cin,str);
   int count = 0;

   for(int i=0; i<str['\0'];i++){
    if(str[i] == 'M' || str[i] == 'm'){
        count++;
    }
   }
   cout<<str<<endl;
   cout<<"the occurence of 'm' here is "<<count<<endl;
}