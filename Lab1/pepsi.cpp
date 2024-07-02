#include <iostream>
using namespace std;
int main()
{
	int total_customers = {17750}, customers_purchase_drinks{}, customer_prefered_lemon_flavoured{}, customer_do_not_purchase{};

	customers_purchase_drinks = (total_customers / 100) * 22;

	customer_prefered_lemon_flavoured = (customers_purchase_drinks / 100) * 69;

	customer_do_not_purchase = total_customers - customers_purchase_drinks;

	cout << "The approximate number of customers who purchase one or more energy drinks per week: " << customers_purchase_drinks << endl;

	cout << "The approximate number of customers who prefer lemon flavoured energy drinks: " << customer_prefered_lemon_flavoured << endl;

	cout << "The approximate number of customers who do not purchase energy drinks: " << customer_do_not_purchase;

	return 0;
}
