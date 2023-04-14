#include <iostream>
using namespace std;
int main()
{
    int athlete1, athlete2, athlete3, total_seconds, minutes, reamining_seconds;
    cout << "Enter time of 1st contestant: ";
    cin >> athlete1;
    cout << "Enter time of 2nd contestant: ";
    cin >> athlete2;
    cout << "Enter time of 3rd contestant: ";
    cin >> athlete3;
    total_seconds = athlete1 + athlete2 + athlete3;
    minutes = total_seconds / 60;
    reamining_seconds = total_seconds % 60;
    cout << "Total time is: " << minutes << ":" << reamining_seconds;
}
