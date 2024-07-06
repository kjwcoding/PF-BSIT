
/*
Problem 3 : Write a program that prompts the user to enter as many characters as he / she wishes and terminate it with z or Z.The program counts and displays the number of vowels(a, e, i, o, u) entered by the user.The user may enter alpha character in either lower case or upper case.Example: The user enters : 12’;[]., a, b3 4Iu78 A E : 1 u 2 ~O o 0A0”}ull U 12ybusjhwe Z
    The program output is as follows :
    Count of a’s : 3
    Count of e’s : 2
    Count of i’s : 1
    Count of o’s : 2
    Count of u’s : 3
*/

#include <iostream>
using namespace std;
int main()
{
    int count_a{0}, count_e{0}, count_i{0}, count_o{0}, count_u{0};
    char ch;
    cout << "Enter as many characters as you wish: ";
    cin >> ch;

    while (!(ch == 'z' || ch == 'Z'))
    {
        if (ch == 'a' || ch == 'A')
        {
            count_a += 1;
        }

        else if (ch == 'e' || ch == 'E')
        {
            count_e += 1;
        }

        else if (ch == 'i' || ch == 'I')
        {
            count_i += 1;
        }

        else if (ch == 'o' || ch == 'O')
        {
            count_o += 1;
        }

        else if (ch == 'u' || ch == 'U')
        {
            count_u += 1;
        }
    }
    cout << "Count of a's:  " << count_a;
    cout << "\nCount of e's:  " << count_e;
    cout << "\nCount of i's:  " << count_i;
    cout << "\nCount of o's:  " << count_o;
    cout << "\nCount of u's:  " << count_u;
}