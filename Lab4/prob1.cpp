/*
Problem 1:
a) Write a function that accepts an three character parameters and returns the middle
character in alphabetical ordering.
b) Write main() function that accepts three characters from the user and calls (invokes) the
function written in part a) above and displays the middle of the three characters.
(Note: The use of logical operators (&&, ||, !) is not allowed.)
Example:
input : A, Y, C
output : The middle character is ‘C’.
*/

#include <iostream>
using namespace std;

char MidElement(char ch1, char ch2, char ch3)
{
    if (ch1 >= ch2)
    {
        if (ch1 >= ch3)
        {
            if (ch2 >= ch3)
            {
                return ch2;
            }
            else
            {
                return ch3;
            }
        }
        else
        {
            return ch1;
        }
    }
    else if (ch2 >= ch3)
    {
        if (ch3 >= ch1)
        {
            return ch3;
        }
        else
        {
            return ch1;
        }
    }
    else
    {
        return ch2;
    }
}

int main()
{
    char ch_1, ch_2, ch_3;

    cout << "Enter three letters to find the middle letter: ";
    cin >> ch_1 >> ch_2 >> ch_3;

    cout << "The middle character is '" << MidElement(ch_1, ch_2, ch_3) << "' ";
}