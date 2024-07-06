#include <iostream>
using namespace std;
int main()
{
    int height{};
    cout << "Please enter height of diamond: ";
    cin >> height;

    cout << endl;
    
    for (int j{1}; j <= height; j++)
    {
        for (int s{height}; s > j; s--)
        {
            cout << " ";
        }

        for (int i{1}; i <= j; i++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }

    for (int j{height}; j >= 1; j--)
    {
        for (int s{height}; s >= j; s--)
        {
            cout << " ";
        }

        for (int i{1}; i < j; i++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }
}