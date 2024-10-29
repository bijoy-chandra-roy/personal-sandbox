#include <iostream>
using namespace std;
int main()
{

    int a, b, X;
    cin >> a >> b;

    if (a < b)
    {
        X = b - a;
    }
    else
    {
        X = ((b + 24) - a);
    }
    cout << "O JOGO DUROU " << X << " HORA(S)" << endl;
    return 0;
}