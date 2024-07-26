/*
Problem 2
a) Write a function, find, that accepts an array of integers and a ‘Key’ and returns the index
of the last occurrence of the ‘Key’ in the array. If the ‘Key’ is not present in the array, the
function returns -1.
Example 1:
Array : 2 -2 3 8 5 12 4 9 7 8 1
Key : 8
The function returns: 9
Example 2:
Array: 2 -2 3 8 5 12 4 9 7 8 1
Key: 6
The function returns: -1
b) Write main() function that declares an array of integer and populates it from the user
data. It then calls the function written in part a) above and displays the result on the
screen.
*/

#include <iostream>
using namespace std;
int find(int arr[], int size, int key)
{
    int last_occurence{-1};

    for (int i{size - 1}; i >= 0; i--)
    {
        if (arr[i] == key)
        {
            return last_occurence = i;
        }
    }

    return last_occurence;
}

int main()
{
    int const no_of_elements{10};
    int arr[no_of_elements]{}, key{};
    cout << "Please enter " << no_of_elements << " integer values in the array: ";

    // Input
    for (int i{}; i < no_of_elements; i++)
    {
        cin >> arr[i];
    }

    cout << "Please enter a number to find its last occurence in the array: ";
    cin >> key;

    cout << "The last occurence of " << key << " in the array is on index: " << find(arr, no_of_elements, key);
}