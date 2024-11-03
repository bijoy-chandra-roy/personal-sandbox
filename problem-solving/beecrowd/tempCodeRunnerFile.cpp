#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, X, Y;
    cin >> a >> b >> c >> d;
    if (a == c)
    {
        if (b == d)
        {
            X = 24;
            Y = 0;
        }
        else if (b > d)
        {
            X = 23;
            Y = 60 - (b - d);
        }
        else
        {
            X = 0;
            Y = d - b;
        }
    }

    else if (a > c)
    {
        if (b == d)
        {
            X = 24 - (a - c);
            Y = 00;
        }
        else if (b > d)
        {
            X = 23 - (a - c);
            Y = 60 - (b - d);
        }
        else
        {
            X = 24 - (a - c);
            Y = d - b;
        }
    }

    else
    {
        if (b == d)
        {
            X = c - a;
            Y = 00;
        }
        else if (b > d)
        {
            X = (c - a) - 1;
            Y = 60 - (b - d);
        }
        else
        {
            X = c - a;
            Y = d - b;
        }
    }

    cout << "O JOGO DUROU " << X << " HORA(S) E " << Y << " MINUTO(S)" << endl;
    return 0;
}