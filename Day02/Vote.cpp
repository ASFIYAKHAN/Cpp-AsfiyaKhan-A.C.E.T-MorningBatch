#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the age: ";
    cin >> age;

    if (age < 18) {
        cout << "You are not eligible to vote";
    } 
    else if (age > 50) {
        cout << "You are too old to vote";
    } 
    else {
        cout << "You can vote";
    }

    return 0;
}
