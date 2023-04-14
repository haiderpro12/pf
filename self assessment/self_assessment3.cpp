#include <iostream>
using namespace std;
int main()
{
    float lenght;
    float width;
    float perimeter;
    cout << "enter lenght: ";
    cin >> lenght;
    cout << "enter width: ";
    cin >> width;
    perimeter = 2 * (lenght + width);
    cout << "perimeter is: " << perimeter;
}