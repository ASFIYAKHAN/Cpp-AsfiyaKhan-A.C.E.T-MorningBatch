#include <iostream>
using namespace std;

int main() {
    float w1, w2, p1, p2, result;
    cout << "Enter the weight of the first item (Floating number): ";
    cin >> w1;
    cout << "Enter how many purchases you did (Floating number): ";
    cin >> p1;
    cout << "Enter the weight of the second item (Floating number): ";
    cin >> w2;
    cout << "Enter how many purchases you did (Floating number): ";
    cin >> p2;
    result = (w1 * p1) + (w2 * p2) / 2;
    cout << "Average of the items is: " << result << endl;
    return 0;
}
