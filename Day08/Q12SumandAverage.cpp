#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"enter the elements in the array :"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    int sum = 0;
    int avg;
    for(int i=0;i<10;i++){
        sum = sum + arr[i];
    }
    avg = sum / 10;
    cout<<"the sum of the array of elements are :"<<sum<<endl;
    cout<<"the average of the array of elements are :"<<avg<<endl;

}