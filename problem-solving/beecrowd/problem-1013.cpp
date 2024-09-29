#include<iostream>
using namespace std;
int main(){
    int a, b, c, MajorAB;
    cin >> a >> b >> c;
    MajorAB = max(max(a,b),c);
    cout << MajorAB << " eh o maior" << endl;
    return 0;
}