#include <iostream>
using namespace std;
int Greatest(int _num1, int _num2)
{
    if (_num1 >= _num2)
    {
        return _num1;
    }
    return _num2;
}

int main()
{
    int num1{}, num2{}, num3{}, largest{};

    cout << "Please Enter 3 numbers to find which one is largest: ";
    cin >> num1 >> num2 >> num3;

    largest = Greatest(num1, num2);
    largest = Greatest(largest, num3);

    cout << largest << " is the largest number";
}