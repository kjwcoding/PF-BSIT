#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{}, num3{};

    cout << "Enter three numbers to see largest number: ";
    cin >> num1 >> num2 >> num3;
    
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1 << " is geater";
        }
        else
        {
        	cout << num3 << " is greater";
		}
    }
    else
    {
        if (num2 > num3)
        {
            if (num2 > num1)
            {
                cout << num2 << " is greater";
            }
            else
            {
            	cout << num1 << " is greater";
			}
        }
        else
        {
        	if (num3 > num1)
        	{
        		if (num3 > num2)
        		{
        			cout << num3 << " is greater";
				}
				else
				{
					cout << num2 << " is greater";
				}
			}
		}
    }
}
