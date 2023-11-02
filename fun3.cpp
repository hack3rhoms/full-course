#include <iostream>
using namespace std;

void fun(int &x, int &y)
{
    x += 1;
    y += 2;
}

int main()
{
    int k = 50, r = 10;
    fun(k, r);
    cout << "k = " << k << " "
         << "r = " << r << endl;
    return 0;
}