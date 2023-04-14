#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;

    cout << "Enter 1st side of triangle: ";
    cin >> side1;

    cout << "Enter 2nd side of triangle: ";
    cin >> side2;

    cout << "Enter 3rd side of triangle: ";
    cin >> side3;

    if ((side1 == side2) && (side1 == side3))
    {
        cout << "Equilateral triangle";
    }
    if (((side1 != side2) && ((side1 == side3)) || (side1 == side2) && (side1 != side3)))
    {
        cout << "isosceles triangle";
    }
    if ((side1 != side2) && (side2 != side3) && (side1 != side3))
    {
        cout << "Scalene triangle";
    }
}
