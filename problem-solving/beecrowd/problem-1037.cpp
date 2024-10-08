#include<iostream>
using namespace std;
int main(){
    float x;
    cin >> x;
    if(x<0||x>100){
        cout << "Fora de intervalo" << endl;
    }
    else if((0<=x)&&(x<=25.0000)){
        cout << "Intervalo [0,25]" << endl;
    }

    else if((25.00001<=x)&&(x<=50.0000)){
        cout << "Intervalo (25,50]" << endl;
    }

    else if((50.00001<=x)&&(x<=75.0000)){
        cout << "Intervalo (50,75]" << endl;
    }
    
    else if((75.00001<=x)&&(x<=100.0000)){
        cout << "Intervalo (75,100]" << endl;
    }
    
    return 0;
}