#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < 10000; i++)
    {
        if (i % x == 2)
        {
            cout << i << endl;
        }
    }
    return 0;
}