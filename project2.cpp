#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (size_t k = 1; k <= 10; k++)
        {
            if (i == 1 || i == 10)
                cout << "*";
            else if (k == 1 || k == 10)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}