#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x;
    float a, b, c;

    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> a >> b >> c;
        cout << fixed << setprecision(1) << ((a * 2) + (b * 3) + (c * 5)) / 10 << endl;
    }
    return 0;
}