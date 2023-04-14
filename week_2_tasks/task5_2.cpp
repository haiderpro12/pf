#include <iostream>
#include <cmath>
using namespace std;
int secret(int num);
int main()
{
    int num;
    cout << "enter num: ";
    cin >> num;
    int answer = secret(num);
    cout << answer;


}
int secret(int num)
{
if(num >=10 && num <=52)
{
    int result;
    int num_mod = num%10;
    int num_div = num /10;
    double power = pow(num_div,num_mod);
    result =  power - (num_div *num_mod);
    return result;
}
}