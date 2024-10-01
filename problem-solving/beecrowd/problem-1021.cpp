#include<iostream>
using namespace std;

int main(){

    double v;
    int n[] = {100, 50, 20, 10, 5, 2};
    double c[] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};

    cin >> v;

    cout << "NOTAS:" << endl;

    for(int i = 0; i < 6; i++){
        int count = v/n[i];
        cout << count << " nota(s) de R$ " << n[i] << ".00" << endl;
        v -= count*n[i];

    }

    cout << "MOEDA:" << endl;

    for(int i=0; i < 6; i++){
        int count = v/c[i];
        cout << count << " moeda(s) de R$ " << c[i] << endl;
        v -= count*c[i];
    }


    return 0;
}