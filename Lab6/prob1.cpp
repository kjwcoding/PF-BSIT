/*
Problem 1:
a) Write a function, bubbleSort, that accepts an array of integers as a parameter and sorts it
in descending (non-increasing) i.e. the highest number at index 0.
b) Write main() function that initializes an array of 10 integers numbers, sorts the array bu
calling the sort function written in part a) above and then displays the array.
*/

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int j{size - 1}; j >= 0; j--)
    {
        for (int i{}; i < j; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main()
{
    int const no_of_elements{10};
    int arr[no_of_elements]{-6, 3, 2, 5, 1, 0, 4, 8, 0, -7};

    for (int i{}; i < no_of_elements; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;

    // Function Calling
    bubbleSort(arr, no_of_elements);

    // Display the array
    for (int i{}; i < no_of_elements; i++)
    {
        cout << arr[i] << ' ';
    }
}