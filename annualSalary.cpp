#include <iostream>
using namespace std;

int main()
{
    float annualSalary;
    cout << "Enter your annual salary: ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 2;
    cout << "Your monthly salary is : " << monthlySalary << endl;
    cout << "In 10 years will : " << annualSalary * 10;

    return 0;
}
