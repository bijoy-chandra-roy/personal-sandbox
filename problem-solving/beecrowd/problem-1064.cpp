#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x, a = 0;
    int c = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> x;
        if (x > 0)
        {
            c++;
            a = a + x;
        }
    }
    cout << c << " valores positivos" << endl;
    cout << fixed << setprecision(1) << a / c << endl;
    return 0;
}
