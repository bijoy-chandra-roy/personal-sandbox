#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x, t = 0.00;
    cin >> x;
    if (x <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else
    {
        if (x <= 3000.00)
        {
            t = (x - 2000.00) * 0.08;
        }
        else if (x <= 4500.00)
        {
            t = 1000.00 * 0.08;
            t = t + ((x - 3000.00) * 0.18);
        }
        else
        {
            t = 1000.00 * 0.08;
            t = t + (1500.00 * 0.18);
            t = t + ((x - 4500.00) * 0.28);
        }
        cout << "R$ " << fixed << setprecision(2) << t << endl;
    }
    return 0;
}