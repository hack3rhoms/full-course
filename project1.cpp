#include <iostream>
using namespace std;

int main()
{
    int e = 1;
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 4; b >= a; b--)
        {
            cout << " ";
        }
        for (int c = 0; c < e; c++)
        {
            cout << "*";
        }
        cout << endl;
        e = e + 2;
    }
    ///////////////////////////////////////////////
    /*
     *
     **
     ***
     ****
     *****
     */

    /*
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 4; j >= i; j--)
        {
            cout << " ";
        }
        for (size_t k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    */
    //////////////////////////////////////////
    /*
    *****
    ****
    ***
    **
    *
    */

    /*
    مثلث مقلوب

    for (size_t i = 5; i >= 1; i--)
    {
        for (size_t j = 4; j >= i; j--)
        {
            cout << " ";
        }
        for (size_t k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    */

    return 0;
}