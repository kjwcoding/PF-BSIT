#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{}, result{};
    char arthematicOperator;

    cout << "Enter first number, arthematic operator (+, -, *, /, %) and second number: ";
    cin >> num1 >> arthematicOperator >> num2;

    if (arthematicOperator == '+')
    {
        result = num1 + num2;
        cout << num1 << ' ' << arthematicOperator << ' ' << num2 << " = " << result;
    }
    else if (arthematicOperator == '-')
    {
        result = num1 - num2;
        cout << num1 << ' ' << arthematicOperator << ' ' << num2 << " = " << result;
    }
    else if (arthematicOperator == '*')
    {
        result = num1 * num2;
        cout << num1 << ' ' << arthematicOperator << ' ' << num2 << " = " << result;
    }
    else if (arthematicOperator == '/')
    {
        result = num1 / num2;
        cout << num1 << ' ' << arthematicOperator << ' ' << num2 << " = " << result;
    }
    else if (arthematicOperator == '%')
    {
        result = num1 % num2;
        cout << num1 << ' ' << arthematicOperator << ' ' << num2 << " = " << result;
    }
    else
    {
        cout << "You have entered an invalid charater, please try again later";
    }
}