#include <bits/stdc++.h>
using namespace std;

int main() {
    float x;
    cin >> x;

    cout << "NOTAS:" << endl;

    int y = x*100;

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    
    for (int i = 0; i < 6; ++i) {
        cout << int(y / notes[i]) << " nota(s) de R$ " << notes[i]/100 << ".00" << endl;
        y %= notes[i];
    }

    cout << "MOEDAS:" << endl;

    int moedas[] = {100, 50, 25, 10, 5, 1};
    
    for (int i = 0; i < 6; ++i) {
        cout << int(y / moedas[i]) << " moeda(s) de R$ " << fixed << setprecision(2) << float(moedas[i]/100.00) << endl;
        y %= moedas[i];
    }

    return 0;
}
