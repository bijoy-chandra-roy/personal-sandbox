#include <bits/stdc++.h> //My friend Rakib told me to use it.
using namespace std;

int main() {
    int x;
    cin >> x;

    cout << x << endl;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    
    for (int i = 0; i < 7; ++i) {
        cout << x / notes[i] << " nota(s) de R$ " << notes[i] << ",00" << endl;
        x %= notes[i];
    }

    return 0;
} //Had the idea myself, but had to use ChatGPT to be sure.
