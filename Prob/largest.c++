#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{}, num3{}, num4{};

    cout << "Enter four numbers to find largest number: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 >= num2 && num1 >= num3 && num1 >= num4)
    {
        cout << num1 << " is largest number";
    }

    else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
    {
        cout << num2 << " is largest number";
    }

    else if (num3 >= num1 && num3 >= num2 && num3 >= num4)
    {
        cout << num3 << " is largest number";
    }

    else
        cout << num4 << " is largest number";
}