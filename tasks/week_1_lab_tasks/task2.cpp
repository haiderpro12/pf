#include <iostream>
using namespace std;
int main()
{
    int angle_1,angle_2,angle_3;
    cout << "Enter angle 1: ";
    cin >> angle_1;

    cout << "Enter angle 2: ";
    cin >> angle_2;

    cout << "Enter angle 3: ";
    cin >> angle_3;

    if(angle_1+angle_2+angle_3 == 180)
    {
        cout << "valid trangle";
    }
    else
    {
        cout << "invalid triangle";
    }

}