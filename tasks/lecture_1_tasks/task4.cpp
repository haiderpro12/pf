#include <iostream>
using namespace std;
int main()
{
    float grade;
    cout << "Enter grade: ";
    cin >> grade;
    if (grade >= 5.5)
    {
        cout << "Excellent!";
    }
    else
    {
        cout << "Not excellent.";
    }
}