#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, SUM = 0;
    cin >> x >> y;

    if (x > y)
    {
        int temp = x;
        x = y + 1;
        y = temp;
    }

    if (x % 2 == 0)
    {
        x++;
    }

    for (int i = x; i < y; i += 2)
    {
        SUM = SUM + i;
    }

    cout << SUM << endl;
    return 0;
}