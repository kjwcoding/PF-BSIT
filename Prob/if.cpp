#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{}, num3{};

    cout << "Enter three numbers to see largest number: ";
    cin >> num1 >> num2 >> num3;

    // if (num1 > num2 && num1 > num3)
    // {
    //     cout << num1 << " is geater";
    // }
    // else if (num2 > num1 && num2 > num3)
    // {
    //     cout << num2 << " is greater";
    // }
    // else
    // {
    //     cout << num3 << " is greater";
    // }

    // if (num1 >= num2)
    // {
    //     if (num1 >= num3)
    //     {
    //         cout << num1 << " is geatest";
    //     }
    //     else
    //     {
    //         cout << num3 << " is greatest";
    //     }
    // }
    // else
    // {
    //     if (num2 >= num1)
    //     {
    //         if (num2 >= num3)
    //         {
    //             cout << num2 << " is greatest";
    //         }
    //         else
    //         {
    //             cout << num3 << " is greatest";
    //         }
    //     }
    // }

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1 << " is greatest";
        }
        else
        {
            cout << num3 << " is greatest";
        }
    }
    else
    {
        if (num2 > num1)
        {
            if (num2 > num3)
            {
                cout << num2 << " is greatest";
            }
            else
            {
                cout << num3 << " is greatest";
            }
        }
    }
}