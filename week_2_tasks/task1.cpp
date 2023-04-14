#include <iostream>
using namespace std;
int equal(int num1, int num2, int num3);
int main()
{
    int num1, num2, num3;
    cout << "Enter 1st digit: ";
    cin >> num1;

    cout << "Enter 2nd digit: ";
    cin >> num2;

    cout << "Enter 3rd digit: ";
    cin >> num3;

    equal(num1,num2,num3);
}
int equal(int num1, int num2, int num3)
{

    if((num1 == num2) && (num1 == num3))
    {
        cout << 3;
    }
    else if (((num1 == num2) && (num1 != num3)) || ((num2 == num3)&&(num2!=num1)))
    {
        cout << 2;
    }
    else
    {
        cout << 0;
    }
   

}