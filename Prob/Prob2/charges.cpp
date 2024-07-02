#include <iostream>
using namespace std;
int main()
{
    string callerName{};
    int callMins{}, sim{}, charges{};

    cout << "Please Enter Your Name: ";
    cin >> callerName;

    cout << "\n1: ZONG\n2: TELENOR\n3: JAZZ\n4: UFONE\n5: SCOM\nPlease enter the caller sim network: ";
    cin >> sim;

    cout << "\nPlease enter the total minutes you'll talk: ";
    cin >> callMins;

    if (sim == 1)
    {
        charges = 2 * callMins;
    }

    else if (sim == 2)
    {
        charges = 3 * callMins;
    }

    else if (sim == 3)
    {
        charges = 4 * callMins;
    }

    else if (sim == 4 || sim == 5)
    {
        charges = 5 * callMins;
    }

    else
    {
        cout << "You've entered and invalid sim number\nPlease restart the program\nand try again in a few seconds";
    }
    cout << "Total charges for " << callMins << " Minutes is Rs " << charges << '.';

    return 0;
}