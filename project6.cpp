#include <iostream>
using namespace std;

// Number factorial

int main()
{
    int n = 0, fact = 1;
    cout << "Enter positive integer : ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    cout << "factorial of " << n << "=" << fact << endl;

    return 0;
}