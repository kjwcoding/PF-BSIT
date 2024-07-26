/*
Problem 4:
a) Write a function, find, that accepts an array of integers and a ‘Key’ and returns the index
of the first occurrence of the ‘Key’ in the array. If the ‘Key’ is not present in the array,
the function returns -1.
Example 1:
Array : 2 -2 3 8 5 18 4 9 8 1
Key : 8
The function returns: 3
Example 2:
Array: 2 -2 3 8 5 18 4 9 8 1
Key: 7
The function returns: -1
b) Write main() function that declares an array of integer and populates it from the user
data. It then calls the function written in part a) above and displays the result on the
screen.
*/

#include <iostream>
using namespace std;
int find(int arr[], int key)
{
    int i{};
    while (i < 10)
    {
        if (arr[i] == key)
        {
            return i;
        }
        i++;
    }
}

int main()
{
    int arr[10]{}, key;

    cout << "Please enter 10 intergal numbers in the array:";

    for (int ind{}; ind < 10; ind++)
    {
        cin >> arr[ind];
    }

    cout << "\nNow Please enter a key number of array to find its index:";
    cin >> key;

    cout << key << " is found in index number " << find(arr, key) << " of the given array.";
}