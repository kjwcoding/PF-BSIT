#include <iostream>
using namespace std;

void QuadraticFormula(int x)
{
    int result = {};

    result = 2 * (x * x) - 3 * x + 2500;
    cout << "Quadratic Formula of 2x^2-3x+2500 = " << result;
}

int main()
{
    // cout << "Hello World!" << endl; // cout statement
    // cout << "Hello World!" << endl; // cout statement
    // cout << 2 + 5 * 25 << endl;     // cout statement

    int valueOfX = 4;
    QuadraticFormula(valueOfX);
    return 0;
}


