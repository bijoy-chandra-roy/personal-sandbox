#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (fmod(i, 2) != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}