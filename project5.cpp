#include <iostream>
using namespace std;

int main()
{
    int n = 0, r = 0;
    cout << "Enter a positive integer :";
    cin >> n;
    cout << "Enter a rang : ";
    cin >> r;

    for (size_t i = 1; i <= r; cout << i << "*" << r << "=" << i * r << endl, i++)
        ;

    return 0;
}