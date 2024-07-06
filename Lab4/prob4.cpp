/*
Problem 4:
a) Write a function, Combinatorial, that accepts two positive integers n & k and returns the
value of . =
b) Write main() that asks user to enter two positive integers n & k, where n > 0 and 0<=k<=n. It then calls the function written in part a) above and displays the result.
Example:
The user enters : 4 2
Output : 6
*/

#include <iostream>
using namespace std;
int Combinatorial(int n, int k)
{
    int sum{};
    return sum = n + k;
}

int main()
{
    int num1{}, num2{};
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > 0)
    {
        if (num2 >= 0 && num2 <= num1)
        {
            cout << "Sum = " << Combinatorial(num1, num2);
        }
        else
            cout << num2 << " does not satisfy the condition: 0<=num2<=n\nTry again";
    }
    else
        cout << num1 << " is less than 1\nTry again";
}