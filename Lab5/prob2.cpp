/*
Problem 2:
a) Write a function, swap, that takes two integer parameters and reverses their
content.
b) Write main() function written below and execute it.
int main() {
int num1{12}, num2{45};
cout << num1 << ‘ ‘ << num2 << endl; // prints 12 45
swap(num1, num2);
cout << num1 << ‘ ‘ << num2 << endl; // prints 45 12
return 0;
}
*/

#include <iostream>
using namespace std;
void swap(int &num1, int &num2) // Parameter Pass by Reference
{
    int temp{num1};
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1{12}, num2{45};

    // Output before sawp
    cout << num1 << ' ' << num2 << endl;

    // Function Calling
    swap(num1, num2);

    // Output after swap
    cout << num1 << ' ' << num2;
}