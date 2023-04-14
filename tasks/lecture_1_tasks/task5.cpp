#include <iostream>
using namespace std;
main()
{
    string password;
    cout << "Enter password: ";
    cin >> password;
    if (password == "s3cr3t!P@ssw0rd")
    {
        cout << "Welcome!";
    }
    else
    {
        cout << "Wrong pssword!";
    }
}
