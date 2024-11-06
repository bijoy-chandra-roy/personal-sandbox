#include <iostream>
using namespace std;
int main()
{
    double x;
    int c = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> x;
        if (x > 0)
        {
            c++;
        }
    }
    cout << c << " valores positivos" << endl;
    return 0;
}