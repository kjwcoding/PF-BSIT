#include <iostream>
using namespace std;
int calculateTime(int seconds)
{

    if (seconds >= 86400)
    {
        return (seconds / 86400);
    }

    else if (seconds >= 3600)
    {
        return (seconds / 3660);
    }

    else if (seconds >= 60)
    {
        return (seconds / 60);
    }
}

int main()
{
    int sec{}, result{};

    cout << "Please enter number of seconds: ";
    cin >> sec;

    result = calculateTime(sec);
    if (sec >= 86400)
    {
        cout << "There are" << result << "Days in< " << sec << " seconds";
    }

    else if (sec >= 3600)
    {
        cout << "There are" << result << "Hours in< " << sec << " seconds";
    }

    else if (sec >= 60)
    {
        cout << "There are" << result << "Minutes in< " << sec << " seconds";
    }
}