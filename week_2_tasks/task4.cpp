#include <iostream>
#include <cmath>
using namespace std;
bool is_Prim_Pyth_Triple(int a, int b, int c);
int main()
{
    int a, b, c;
    cout << "enter 1st number: ";
    cin >> a;

    cout << "enter 2nd number: ";
    cin >> b;

    cout << "enter 3rd number: ";
    cin >> c;

    if (is_Prim_Pyth_Triple(a, b, c) == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
bool is_Prim_Pyth_Triple(int a, int b, int c)
{
    if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || ((pow(a, 2) + pow(c, 2) == pow(b, 2))) || ((pow(b, 2) + pow(c, 2) == pow(a, 2))))
    {
        return true;
    }
    else
    {
        return false;
    }
}
