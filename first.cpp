#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int n = 0, ce = 0, co = 0;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter the number :";
        cin >> n;
        if (n % 2 == 0)
            ce++;
        else
            co++;
    }
    cout << "Even" << ce << endl;
    cout << "odd" << co << endl;

    return 0;
}