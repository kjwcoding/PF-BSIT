#include <iostream>
using namespace std;

int Fibonacci(int num)
{
    int fib{0}, _new{1}, i{1};
    while (i <= num)
    {
        _new = _new + fib;
        fib = _new - fib;
        i++;
    }
    return fib;
}

int main()
{
    int num{};

    cout << "Please enter number: ";
    cin >> num;

    cout << "F" << num << " = " << Fibonacci(num);
}