#include <iostream>
using namespace std;
int main()
{
    float radius;
    float volume;
    cout << "Enter radius: ";
    cin >> radius;
    volume = 4 / 3.0 * 3.1415 * radius * radius * radius;
    cout << "volume is: " << volume;
}