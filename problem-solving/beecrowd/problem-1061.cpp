#include <iostream>
using namespace std;
int main()
{
    string ignore;
    int a, b, c, d, w, x, y, z, S, E, Diff, ND, NH, NM, NS;
    
    cin >> ignore >> a;
    cin >> b >> ignore >> c >> ignore >> d;

    cin >> ignore >> w;
    cin >> x >> ignore >> y >> ignore >> z;
    
    S = ((((((a * 24) + b) * 60) + c) * 60) + d);
    E = ((((((w * 24) + x) * 60) + y) * 60) + z);
    Diff = E - S;

    ND = Diff / 86400;
    NH = (Diff - (ND * 86400)) / 3600;
    NM = (Diff - (ND * 86400) - (NH * 3600)) / 60;
    NS = (Diff - (ND * 86400) - (NH * 3600) - (NM * 60));

    cout << ND << " dia(s)" << endl;
    cout << NH << " hora(s)" << endl;
    cout << NM << " minuto(s)" << endl;
    cout << NS << " segundo(s)" << endl;

    return 0;
}