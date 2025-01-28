#include <iostream>
using namespace std;

int main() {
    int days, year, weeks, day, remaining;
    cout << "Enter the number of days: ";
    cin >> days;
    year = days / 365;
    remaining = days % 365;
    weeks = remaining / 7;
    day = remaining % 7;
    cout << "\nThe years are: " << year;
    cout << "\nThe weeks are: " << weeks;
    cout << "\nThe days are: " << day;
    return 0;
}