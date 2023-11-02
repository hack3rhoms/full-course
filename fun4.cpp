#include <iostream>
using namespace std;

// project 6

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    cout << "Number factorial = " << fact(5) << endl;
    return 0;
}