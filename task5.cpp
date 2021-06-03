#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, mul;
    for (i = 1; i <= 12; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            mul = j * i;
            cout << j << "x" << i << "=" << mul << endl;
        }
        cout << endl;
    }
    return 0;
}