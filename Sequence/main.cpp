#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int total;
    //loop your numbers

    cout << "What is your starting integer?" << endl;
    cin >> num1;

    cout << "What is your ending integer?" << endl;
    cin >> num2;

    total = 0;
    for (int x = num1; x <= num2; x++)
    {
        total += x;
    }

    cout << "The sum of the integers from " << num1 << " to " << num2 << " = "<< total << endl;

    return 0;
}
