#include <iostream>
using namespace std;

int Factorial(int num)
{
    int fact{1};

    for (int i = num; i >= 1; i--)
    {
        cout << i << " * ";
        fact *= i;
    }
    return fact;
}

int main()
{
    int number{};
    cout << "Please enter number to print its factorial: ";
    cin >> number;

    cout <<" = " << Factorial(number);
    return 0;
}