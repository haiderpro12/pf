#include <iostream>
using namespace std;
int calculate_bonus(int days);
int main()
{
    int days;
    cout << "Enter days: ";
    cin >> days;    
    calculate_bonus(days);
}

int calculate_bonus(int days)
{
    if(days <= 32 && days >=0)
    {
        cout << 0;
    }
    else if(days >=33 && days <=40)
    {
        int bonus;
        bonus = 325*(days-32);
        cout << bonus;
    }
    else if(days >=41 && days <=48)
    {
        int bonus;
        bonus = 8*325 + (550*(days-40));
        cout << bonus;
    }
    else
    {
        int bonus;
        bonus = 8*325 + 8*550 + (600*(days - 48));
        cout << bonus;

    }
}


