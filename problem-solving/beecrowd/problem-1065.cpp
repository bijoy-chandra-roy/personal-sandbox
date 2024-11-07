#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        if (fmod(x, 2) == 0)
        {
            c++;
        }
    }
    cout << c << " valores pares" << endl;
    return 0;
}
