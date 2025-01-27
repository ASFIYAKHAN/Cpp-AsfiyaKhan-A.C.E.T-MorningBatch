#include<iostream>
using namespace std;
int main(){
    int l,b;
    int area;
    cout<<"enter the length and breadth of rectangle : "<<endl;
    cin>>l>>b;
    area = 2 * (l + b);
    cout<<"the perimeter of rectangle is : "<<area<<endl;
    return 0;
}