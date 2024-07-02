#include <iostream>
using namespace std;
int main()
{
    int testScore1{}, testScore2{}, testScore3{};
    double average{};
    bool perfectScore;

    cout
        << "Enter your 3 test scores and I will \naverage them: ";
    cin >> testScore1 >> testScore2 >> testScore3;

    average = (testScore1 + testScore2 + testScore3) / 3.0;
    if (average <= 110)
    {
        perfectScore = true;
        cout << "Your average is " << average << endl;
    }

    if (perfectScore)
    {
        cout << "Congratulations!\nThat's a perfect score.\nYou deserve a part on the back!";
    }
    return 0;
}