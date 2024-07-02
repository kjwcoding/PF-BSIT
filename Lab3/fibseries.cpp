#include <iostream>
using namespace std;
int Fibonacci(int num)
{
    int fib{0}, _new{1};
    for (int i = 1; i <= num; i++)
    {
        _new += fib;
        fib = _new - fib;
    }
    return fib;
}

int main()
{
    int num{};
    cout << "Enter number: ";
    cin >> num;

    cout << "F" << num << ": " << Fibonacci(num);
}