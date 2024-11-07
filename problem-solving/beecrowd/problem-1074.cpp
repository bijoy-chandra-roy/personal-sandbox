#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, N;
    cin >> N;
    while (N--)
    {
        cin >> x;
        if (x == 0)
        {
            cout << "NULL" << endl;
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << "EVEN ";
            }
            else
            {
                cout << "ODD ";
            }
            if (x > 0)
            {
                cout << "POSITIVE" << endl;
            }
            else
            {
                cout << "NEGATIVE" << endl;
            }
        }
    }
    return 0;
}