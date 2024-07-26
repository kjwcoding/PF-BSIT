/*
Problem 1:
a) Write a function, printReverse, that accepts an array of floats as a parameter and
displays the array in reverse order i.e. the number at the end of array is displayed first
and the number at the start is displayed at the end.
b) Write main() function that initializes an array of 10 floating point numbers and displays
the array using the function written in part a) above.
*/

#include <iostream>
using namespace std;
void printReverse(float arr[], int size)
{
    for (int i{size - 1}; i >= 0; i--)
    {
        cout << arr[i] << ' ';
    }
}

int main()
{
    // Array Size
    int const no_of_elements{10};

    // Array Initialization
    float arr[no_of_elements]{3, 4, 9, 8, 10, 23, 6, 1, 5, 7};

    // Function Calling
    printReverse(arr, no_of_elements);
}