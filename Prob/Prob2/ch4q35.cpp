#include <iostream>
using namespace std;
int main()
{
    int amount1{}, amount2{};

    cout << "Enter first and second amounts: ";
    cin >> amount1 >> amount2;

    if (amount1 > 10)
    {
        if (amount2 < 100 && amount2 > amount1)
        {
            cout << "Greater amount is " << amount2;
        }
        else
        {
            cout << "Greater amount is " << amount1;
        }
    }

    else
    {
        cout << "Condition fails, restart the program and try again";
    }

    return 0;
}