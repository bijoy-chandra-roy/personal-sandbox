#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    int e = 0, o = 0, p = 0, n = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        if (fmod(x, 2) == 0)
        {
            e++;
        }
        if (fmod(x, 2) != 0)
        {
            o++;
        }
        if (x > 0)
        {
            p++;
        }
        if (x < 0)
        {
            n++;
        }
    }
    cout << e << " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;

    return 0;
}