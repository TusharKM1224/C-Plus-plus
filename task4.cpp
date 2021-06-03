#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, sum = 0, choice, mul = 1;
    cout << "Enter the number";
    cin >> n;
    cout << endl;
label:
    cout << "HEY THERE!!" << endl
         << "CHOOSE A OPTION:" << endl
         << "1.PRODUCT OF  THE SERIES" << endl
         << "2.SUM OF THE SERIES" << endl;
    cout << "Enter your choice:";
    cin >> choice;
    if (choice == 1)
    {
        for (i = 1; i <= n; i++)
        {
            mul = mul * i;
        }
        cout << "RESULT IS :" << mul;
    }
    else if (choice == 2)
    {
        for (i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        cout << "RESULT IS :" << sum;
    }
    else
    {

        cout << " You have Entered a wrong choice!!" << endl;
        cout << endl;
        goto label;
    }
    return 0;
}