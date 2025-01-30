#include<iostream>
using namespace std;
class emp{
public:
    int id;
    char name[20];
    char phone[20];
public:
    void collect(){
        cout<<"enter the id\n"<<endl;
        cin>>id;
        cout<<"enter name \n"<<endl;
        cin>>name;
        cout<<"enter phone \n"<<endl;
        cin>>phone;
    }

    void display(){
        cout<<"the id of the employee"<<name<<" is "<<id<<" and phone number "<<phone<<endl;
    }

};
int main(){
    emp obj[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        obj[i].collect();
    }
     for (i = 0; i < 3; i++)
    {
        obj[i].display();
    }
    

}