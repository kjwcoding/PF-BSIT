#include <iostream>
using namespace std;
int main() {
	int totalCustomers = 17750, drinkPurchasers {},
	lemonFlavouredLovers {},
	doNotPurchasers {};
	
	drinkPurchasers = (totalCustomers*22)/100;
	
	lemonFlavouredLovers = (drinkPurchasers*69)/100;
	
	doNotPurchasers = totalCustomers - drinkPurchasers;
	
	cout<<"The approximate number of customers who purchase one or more energy drinks per week: "<<drinkPurchasers<<endl;
	
	cout<<"The approximate number of customers who prefer lemon-flavoured energy drinks: "<<lemonFlavouredLovers<<endl;
	
	cout<<"The approximate number of customers who do not purchase any energy drinks: "<<doNotPurchasers<<endl;
}
