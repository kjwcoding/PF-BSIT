#include <iostream>
using namespace std;
int main()
{
	int tableNumber{}, startNumber{};

	cout << "Enter a number to print its table: ";
	cin >> tableNumber;

	cout << "Enter a starting number: ";
	cin >> startNumber;

	// cout<<tableNumber<<" * "<<startNumber<<" = "<<tableNumber*startNumber<<endl;

	// startNumber+=1;
	// cout<<tableNumber<<" * "<<startNumber<<" = "<<tableNumber*startNumber<<endl;

	// startNumber+=1;
	// cout<<tableNumber<<" * "<<startNumber<<" = "<<tableNumber*startNumber<<endl;

	// startNumber+=1;
	// cout<<tableNumber<<" * "<<startNumber<<" = "<<tableNumber*startNumber<<endl;

	// startNumber+=1;
	// cout<<tableNumber<<" * "<<startNumber<<" = "<<tableNumber*startNumber;

	for (int i = startNumber; i < startNumber + 5; i++)
	{
		cout << tableNumber << " * " << i << " = " << tableNumber * i << endl;
	}

	return 0;
}
