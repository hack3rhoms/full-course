#include <iostream>
using namespace std;

double avg(int m1, int m2, int m3)
{
    return double(m1 + m2 + m3) / 3;
}
int main()
{
    int m1, m2, m3;
    cout << "Enter your marks : " << endl;
    cin >> m1 >> m2 >> m3;
    cout << "avg = " << avg(m1, m2, m3) << endl;
}