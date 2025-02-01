#include<iostream>
using namespace std;
class Test{
  public:
  int mark1,marks2,mark3;

  void GetMarks(){
    cout<<"enter the marks of the subject maths, science and physics :"<<endl;
    cin>>mark1>>marks2>>mark3;
  }

  void ShowSum(){
    int sum;
    sum = mark1+marks2+mark3;
    cout<<"the sum of all the 3 subjects is : "<<sum<<endl;
  }
};
int main(){
   Test t1;
   t1.GetMarks();
   t1.ShowSum();

}