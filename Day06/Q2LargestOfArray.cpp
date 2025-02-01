#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int largest = 0;
    cout<<"enter 10 integers in the array"<<endl;
    for(int i=0 ; i<10 ; i++){
        cin>>arr[i];
    }

    for(int i=1 ; i<10 ;i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    cout<<"the largest number in the array is :"<<largest<<endl;
}