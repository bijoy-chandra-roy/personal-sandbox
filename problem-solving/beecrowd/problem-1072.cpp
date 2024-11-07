#include <iostream>
using namespace std;
int main()
{
    int n, x, a = 0, b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= 10 && x <= 20)
        {
            a++;
        }
        b = n - a;
    }
    cout << a << " in" << endl;
    cout << b << " out" << endl;
    return 0;
}