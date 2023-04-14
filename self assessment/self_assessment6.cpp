#include <iostream>
using namespace std;
int main()
{
    int minutes;
    int hours;
    int total_remaining_minutes;
    cout << "enter minutes: ";
    cin >> minutes;
    hours = minutes / 60;
    total_remaining_minutes = minutes % 60;

    cout << "hours are: " << hours;
    cout << "total remaining minutes: " << total_remaining_minutes;
}