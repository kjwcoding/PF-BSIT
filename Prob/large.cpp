#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{}, num3{}, largest{};

    cout << "Enter 3 numbers to find largest one: ";
    cin >> num1 >> num2 >> num3;

    if(num1>num2)
    {
        largest = num1;
    }
    else 
    {
        largest = num2;
    }
    if(largest>num3)
    {
        cout << "largest number is " << largest;
    }
    else
    {
        cout << "largest number is " << num3;
    }
}