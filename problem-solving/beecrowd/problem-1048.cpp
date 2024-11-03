#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s, p;
    cin >> s;

    if (s >= 0 && s <= 400.00)
    {
        p = 15;
    }
    else if (s > 400.00 && s <= 800.00)
    {
        p = 12;
    }
    else if (s > 800.00 && s <= 1200.00)
    {
        p = 10;
    }
    else if (s > 1200.00 && s <= 2000.00)
    {
        p = 7;
    }
    else if (s > 2000.00)
    {
        p = 4;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << s + (s * (p / 100)) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << (s * (p / 100)) << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << p << " %" << endl;

    return 0;
}