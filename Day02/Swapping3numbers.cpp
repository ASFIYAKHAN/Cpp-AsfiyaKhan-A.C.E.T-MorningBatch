#include <iostream>
using namespace std;

int main() {
    int a, b, c, temp;
    cout << "\nEnter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    cout << "\nEnter the third number: ";
    cin >> c;
    cout << "The numbers are: " << a << b << c;
    temp = a;
    a = c;
    c = temp;
    cout << "\nThe swapped numbers are: " << a << b << c;
    return 0;
}
