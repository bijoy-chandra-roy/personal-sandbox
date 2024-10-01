#include <iostream>
using namespace std;
 
int main() {
 
    int d, h, m, s;
    cin >> d;
    h = d/3600;
    m = (d%3600)/60;
    s = (d%3600)%60;
    cout << h << ":" << m << ":" << s <<endl;
 
    return 0;
}