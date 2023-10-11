#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host : ";
    cin >> hostUserNum;
    system("cls");

    cout << "Gust : ";
    cin >> guestUserNum;

    if (hostUserNum == guestUserNum)
    {
        cout << "Correct !";
    }
    else
        cout << "Failed !";

    return 0;
}