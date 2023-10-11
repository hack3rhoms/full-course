#include <iostream>
using namespace std;

int main()
{
    // Program write out if that number odd or even

    int number;
    cout << "Enter any number:";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "Your number even number" << endl;
    }
    else
    {
        cout << "Your number odd number" << endl;
    }

    return 0;
}