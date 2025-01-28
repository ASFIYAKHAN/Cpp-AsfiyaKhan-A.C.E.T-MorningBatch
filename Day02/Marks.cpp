#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80 && marks < 100) {
        cout << "You belong to A grade";
    } 
    else if (marks > 40 && marks < 80) {
        cout << "You belong to B grade";
    } 
    else if (marks > 35 && marks <= 40) {
        cout << "You belong to C grade";
    } 
    else {
        cout << "You failed";
    }

    return 0;
}
