#include <iostream>
using namespace std;
int main()
{
    float kilometers_per_hour;
    float miles_per_hour;
    cout << "Enter kilometers per hour: ";
    cin >> kilometers_per_hour;
    miles_per_hour = kilometers_per_hour * 0.62137;
    cout << "answer is : " << miles_per_hour;
}