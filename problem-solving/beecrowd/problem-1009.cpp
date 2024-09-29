#include<iostream>
using namespace std;

int main(){
    string n;
    double s, v, t;
    cin >> n >> s >> v;
    t = s + (v*15/100);
    printf("TOTAL = R$ %.2lf\n", t);
return 0;
}