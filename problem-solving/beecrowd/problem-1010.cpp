#include<iostream>
using namespace std;
int main(){
    int a, b, d, e;
    float c, f, g;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    g = (b*c + e*f);
    printf("VALOR A PAGAR: R$ %.2f\n", g);
    return 0;
    
}