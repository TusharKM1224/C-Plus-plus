#include <bits/stdc++.h>
#define year 2020
using namespace std;

int main()
{
    int i;
    for (i = 2000; i <= year; i++)
    {
        if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))

        {
            cout << " result: " << i << ",";
        }
        else
        {
            continue;
        }
    }
    return 0;
}
