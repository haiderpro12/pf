#include <iostream>
using namespace std;
int main()
{
    int _1st_angle;
    int _2nd_angle;
    int _3rd_angle;
    cout << "Enter 1st angle: ";
    cin >> _1st_angle;
    cout << "Enter 2nd angle: ";
    cin >> _2nd_angle;
    _3rd_angle = 180 - (_1st_angle+_2nd_angle);
    cout <<"3rd angle is : " << _3rd_angle;


}

