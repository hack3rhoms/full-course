#include <iostream>
using namespace std;

int main()
{

    /*

    *   *
     * *
      *
     * *
    *   *

    */
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= 5; j++)
        {
            if (i == j || j == 6 - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << "\n";

    /*

******
 *
******
 *
******

    */

    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 0; j <= 5; j++)
        {
            if (j == 1 || i == 1 || i == 5 || i == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}