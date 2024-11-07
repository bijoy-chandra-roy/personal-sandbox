#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (fmod(i, 2) == 0)
        {
            cout << i << "^2 = " << fixed << setprecision(0) << pow(i, 2) << endl;
        }
    }
    return 0;
}