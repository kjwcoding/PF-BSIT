#include <iostream>
using namespace std;
int calculateDays(int monthNum, int year)
{
    if (monthNum == 1)
    {
        return 31;
    }
    else if (monthNum == 2)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return 29;
            }
        }

        else if (year % 4 == 0)
        {
            return 29;
        }
        return 28;
    }

    else if (monthNum == 3)
    {
        return 31;
    }

    else if (monthNum == 4)
    {
        return 30;
    }

    else if (monthNum == 5)
    {
        return 31;
    }

    else if (monthNum == 6)
    {
        return 30;
    }

    else if (monthNum == 7)
    {
        return 31;
    }

    else if (monthNum == 8)
    {
        return 31;
    }

    else if (monthNum == 9)
    {
        return 30;
    }

    else if (monthNum == 10)
    {
        return 31;
    }

    else if (monthNum == 11)
    {
        return 30;
    }

    else if (monthNum == 12)
    {
        return 31;
    }
}

int main()
{
    int month_num{}, year{}, result{};

    cout << "Enter a month (1-12): ";
    cin >> month_num;

    cout << "Enter a year: ";
    cin >> year;

    result = calculateDays(month_num, year);

    cout << result << " Days";
}