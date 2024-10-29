#include <iostream>
using namespace std;

int main()
{

    double x, y, z, min, max, mid, A, B, C;
    cin >> x >> y >> z;

    if ((x > y) && (x > z))
    {

        max = x;

        if (y > z)
        {
            mid = y;
            min = z;
        }
        else
        {
            mid = z;
            min = y;
        }
    }

    else if ((y > z) && (y > x))
    {

        max = y;

        if (z > x)
        {
            mid = z;
            min = x;
        }
        else
        {
            mid = x;
            min = z;
        }
    }

    else
    {
        max = z;

        if (x > y)
        {
            mid = x;
            min = y;
        }
        else
        {
            mid = y;
            min = x;
        }
    }

    A = max;
    B = mid;
    C = min;

    if (A >= B + C)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if ((A * A) == (B * B) + (C * C))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if ((A * A) > (B * B) + (C * C))
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if ((A * A) < (B * B) + (C * C))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}