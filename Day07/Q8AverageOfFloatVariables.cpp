#include<iostream>
using namespace std;
class Average{
  public:  
  float f1,f2,f3;
  Average(){
  float avg;
  cout<<"enter three float variables"<<endl;
  cin>>f1>>f2>>f3;
  avg= (f1+f2+f3)/3;
  cout<<"the avarage of three float variables are : "<<avg<<endl;
  }
};
int main(){
  Average f1;
}