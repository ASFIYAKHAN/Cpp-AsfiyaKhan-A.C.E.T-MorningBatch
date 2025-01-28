#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter the value for a & b: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "The swapped values are: " << a << " " << b;
    return 0;
}
