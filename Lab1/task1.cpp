#include <iostream>
using namespace std;

// void QuadraticFormula(int x)
// {
//     int result = {};

//     result = 2 * (x * x) - 3 * x + 2500;
//     cout << "Quadratic Formula of 2x^2-3x+2500 = " << result;
// }

int main()
{
    // cout << "Hello World!" << endl; // cout statement
    // cout << "Hello World!" << endl; // cout statement
    // cout << 2 + 5 * 25 << endl;     // cout statement

    // int valueOfX = {4};
    // QuadraticFormula(valueOfX);
    // return 0;

    int totalCustomers = 17750, drinkPurchasers{},
        lemonFlavouredLovers{},
        doNotPurchasers{};

    drinkPurchasers = (totalCustomers * 22) / 100;

    lemonFlavouredLovers = (drinkPurchasers * 69) / 100;

    doNotPurchasers = totalCustomers - drinkPurchasers;

    cout << "The approximate number of customers who purchase one or more energy drinks per week: " << drinkPurchasers << endl;

    cout << "The approximate number of customers who prefer lemon-flavoured energy drinks: " << lemonFlavouredLovers << endl;

    cout << "The approximate number of customers who do not purchase any energy drinks: " << doNotPurchasers << endl;
}