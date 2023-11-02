#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x, y;
    x = time(0);
    for (size_t i = 0; i < 10000; i++)
    {
        cout << time(NULL) << endl;
        y = time(0);
    }
    cout << "time token = " << y - x << endl;
    return 0;
}