#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "plaece enter the number 1 :";
    cin >> a;
    cout << "plaece enter the number 2 :";
    cin >> b;
    cout << "plaece enter the number 3 :";
    cin >> c;

    if (a == b && b == c)
        cout << "Eqiulaterral triangle";

    else
    {
        if (a != b && a != c && b != c)
            cout << "Scalene triangle";
        else
            cout << "Isosceles triangle";
    }

    return 0;
}