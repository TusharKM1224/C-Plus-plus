#include <bits/stdc++.h>
#define size 100
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= size; i++)
    {
        int count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if (count == 2)
        {

            cout << i << ", ";
        }
    }
    return 0;
}