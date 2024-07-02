#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char ch1{}, ch2{}, ch3{};

    cout << "Enter three alphabets: ";
    cin >> ch1 >> ch2 >> ch3;

    sort(ch1, ch2, 3);
    cout << "Order: " << ch1 << ' ' << ch2 << ' ' << ch3;
    return 0;
}