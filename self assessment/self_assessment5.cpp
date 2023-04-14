#include <iostream>
using namespace std;
int main()
{
    int hours;
    int minutes;
    int total_minutes;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "enter minutes: ";
    cin >> minutes;
    total_minutes = hours * 60 + minutes;
    cout << "total minutes are: " << total_minutes;
}