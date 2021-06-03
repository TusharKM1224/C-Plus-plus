#include <bits/stdc++.h>
// HOW TO USE MALLOC FUNCTION!!
using namespace std;

int main()
{
    int *p, n, i;
    cout << "Enter the number of integers to be entered: ";
    cin >> n;
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        cout << "insufficient space!! ";
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        cout << "Enter an Integer value";
        cin >> p[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << " Result is :" << p[i];
    }
    return 0;
}