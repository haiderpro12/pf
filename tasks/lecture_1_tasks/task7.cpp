#include <iostream>
using namespace std;
int main()
{
    int num, num_div, num_mod;
    cout << "enter number: ";
    cin >> num;
    num_div = num / 10;
    num_mod = num % 10;

    if (num == 0)
    {
        cout << "Zero";
    }
    else if (num == 11)
    {
        cout << "Eleven";
    }

    else if (num == 12)
    {
        cout << "Twelve";
    }
    else if (num == 13)
    {
        cout << "Thirteen";
    }
    else if (num == 14)
    {
        cout << "Fourteen";
    }
    else if (num == 15)
    {
        cout << "Fifteen";
    }
    else if (num == 16)
    {
        cout << "Sixteen";
    }
    else if (num == 17)
    {
        cout << "Seventeen";
    }
    else if(num == 18)
    {
        cout << "Eighteen";
    }
     else if(num == 19)
    {
        cout << "Nineteen";
    }


    else if (num_div == 1)
    {
        cout << "ten" << endl;
    }
    else if (num_div == 2)
    {
        cout << "twenty" << endl;
    }
    else if (num_div == 3)
    {
        cout << "thirty" << endl;
    }
    else if (num_div == 4)
    {
        cout << "forty" << endl;
    }
    else if (num_div == 5)
    {
        cout << "felse ifty" << endl;
    }
    else if (num_div == 6)
    {
        cout << "sixty" << endl;
    }
    else if (num_div == 7)
    {
        cout << "seventy" << endl;
    }
    else if (num_div == 8)
    {
        cout << "eighty" << endl;
    }
    else if (num_div == 9)
    {
        cout << "ninety" << endl;
    }
    else if (num_div == 10)
    {
        cout << "hundred" << endl;
    }
    else if (num_mod == 1)
    {
        cout << "one" << endl;
    }
    else if (num_mod == 2)
    {
        cout << "two" << endl;
    }
    else if (num_mod == 3)
    {
        cout << "three" << endl;
    }
    else if (num_mod == 4)
    {
        cout << "four" << endl;
    }
    else if (num_mod == 5)
    {
        cout << "five" << endl;
    }
    else if (num_mod == 6)
    {
        cout << "six" << endl;
    }
    else if (num_mod == 7)
    {
        cout << "seven" << endl;
    }
    else if (num_mod == 8)
    {
        cout << "eight" << endl;
    }
    else if (num_mod == 9)
    {
        cout << "nine" << endl;
    }
    else if (num_mod == 10)
    {
        cout << "ten" << endl;
    }
      cout << num_div << num_mod;
 }