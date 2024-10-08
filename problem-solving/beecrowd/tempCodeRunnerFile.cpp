#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;

    if((b*b-4*a*c) < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }
    else{
    double r1 =(-b + sqrt(b*b-4*a*c))/ (2*a);
    double r2 =(-b -sqrt(b*b-4*a*c))/ (2*a);

    cout << fixed << setprecision(5);
    cout << "R1 = " << r1 << endl;
    cout << "R2 = " << r2 << endl;
    }

    return 0;
}