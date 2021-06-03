#include <bits/stdc++.h>
// TO PRINT SUM OF SERIES!!
using namespace std;

int main()
{
    int n, i, sum = 0;
    cout << "Enter the number";
    cin >> n;
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "sum is :" << sum << endl;
    return 0;
}
