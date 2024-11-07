#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, m;
    cin >> x;
    for (int i = 1; i < 11; i++)
    {
        m = i * x;
        cout << i << " x " << x << " = " << m << endl;
    }
}