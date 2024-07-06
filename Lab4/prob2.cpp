/*
Problem 2:
a) Write a function that accepts an integer value, height, and displays the following pattern
on the screen. The height of the pattern is value in parameter height.
b) Write main() function that accepts an integer from the user and calls (invokes) the
function written in part a) above.
Example:
input : 6
output : *
**
***
****
*****
******
*/

#include <iostream>
using namespace std;

void MakePattern(int height)
{
    for (int j{1}; j <= height; j++)
    {
        for (int i{1}; i <= j; i++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
int main()
{
    int height{};
    cout << "Enter height: ";
    cin >> height;
    MakePattern(height);
}