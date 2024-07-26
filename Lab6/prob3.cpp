/*
Problem 3
a) Write a function, min, that accepts an array of integers and returns the index of the
smallest element in the array.
Example 1:
Array : 2 -2 3 8 5 12 4 9 7 8 1
The function returns: 1
b) Write main() function that declares an array of integer and populates it from the user
data. It then calls the function written in part a) above and displays the returned value.
*/

#include <iostream>
using namespace std;
int min(int arr[], int size)
{
    int smallest = 0;
    for (int i{1}; i < size; i++)
    {
        if (arr[i] < arr[smallest])
        {
            smallest = i;
        }
    }
    return smallest;
}

int main()
{
    int const no_of_elements{10};
    int arr[no_of_elements]{};

    cout << "Please enter " << no_of_elements << " integer values in the array: ";

    //  Input from the user
    for (int i{}; i < no_of_elements; i++)
    {
        cin >> arr[i];
    }

    // Function Calling
    cout << "Index of smallest number in the array: " << min(arr, no_of_elements);
}