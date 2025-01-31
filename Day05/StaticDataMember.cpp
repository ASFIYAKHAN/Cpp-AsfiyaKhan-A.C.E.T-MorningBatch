#include<iostream>
using namespace std;
class one{
       public:
       static int a;
       public:
       void set(){
        a++;
        }

        void display(){
            cout<<a<<endl;
        }

};

  int one::a;

int main(){
   one obj1,obj2,obj3;
   obj1.display();
   obj2.display();
   obj3.display();
   obj2.set();
   obj1.display();
   obj2.display();
   obj3.display();
   obj3.set();
   obj1.display();
   obj2.display();
   obj3.display();


  } 