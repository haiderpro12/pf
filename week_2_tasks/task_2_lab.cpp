#include <iostream>
using namespace std;
bool isleap(int year);
int main()
{
    int year;
    cout << "enter year: ";
    cin >> year;
    bool result = isleap(year);
    cout  << result;
}
   /* if (result == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";

}*/
bool isleap(int year)
{
    if (((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0)) || (year % 4 == 0) && (year % 100 != 0))
    {
        return true;
    }
    if (((year % 4 != 0)) || (year % 4 == 0) || (year % 100 == 0) && (year & 400 != 0))
    {
        return false;
    }
}