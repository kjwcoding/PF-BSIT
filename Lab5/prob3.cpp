/*
Problem 3:
a) Write a function, reverse, that accepts an integer array as a parameter and reverses its
content as shown below.
b) Write main() function that initializes an integer array of 10, reverses its content using the
function written in part a) above and displays it on the screen.
Example:
Initial Array : 6 12 3 32 11 21 65 45 56
Reversed Array : 56 45 65 21 11 32 3 12 6
*/

#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{

    for (int i{}, j{size - 1}; i <= j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int const no_of_elements{10};
    int arr[no_of_elements]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverse(arr, no_of_elements);
    for (int i{}; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
