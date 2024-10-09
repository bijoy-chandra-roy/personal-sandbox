#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    if(x==1){
    cout << "Total: R$ " << fixed << setprecision(2) << float(4.00*y) << endl;
    }

    if(x==2){
    cout << "Total: R$ " << fixed << setprecision(2) << float(4.50*y) << endl;
    }
    
    if(x==3){
    cout << "Total: R$ " << fixed << setprecision(2) << float(5.00*y) << endl;
    }
    
    if(x==4){
    cout << "Total: R$ " << fixed << setprecision(2) << float(2.00*y) << endl;
    }
    
    if(x==5){
    cout << "Total: R$ " << fixed << setprecision(2) << float(1.50*y) << endl;
    }
    
    return 0;
}