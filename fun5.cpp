#include <iostream>
using namespace std;

/*
      0 1 2 3 4 5 6 7  8   9
      0 1 1 2 3 5 8 13 21 34
*/

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << fib(6) << endl;
    return 0;
}