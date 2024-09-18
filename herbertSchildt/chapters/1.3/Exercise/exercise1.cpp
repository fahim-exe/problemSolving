#include<iostream>
using namespace std;

int main()
{
    int hrs, pay;
    int wage;

    cout << "Enter hours and wage : \n";

    cin >> hrs >> pay;

    wage = hrs*pay;

    cout << "Employee pay : " << wage;

    return 0;

}
