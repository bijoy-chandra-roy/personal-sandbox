#include <iostream>
using namespace std;

int main(){
    int x, y, z, min, max, mid;
    cin >> x >> y >> z;
    
    if((x > y) && (x > z)){

        max = x;

        if(y > z){
            mid = y;
            min = z;
        }
        else{
            mid = z;
            min = y;
        }
    }

    else if((y > z) && (y > x)){

        max = y;

        if(z > x){
            mid = z;
            min = x;
        }
        else{
            mid = x;
            min = z;
        }
    }

    else{
        max = z;

        if (x > y){
            mid = x;
            min = y;
        }
        else{
            mid = y;
            min = x;
        }
    }

cout << min << endl;
cout << mid << endl;
cout << max << endl;

cout << endl;

cout << x << endl;
cout << y << endl;
cout << z << endl;

return 0;
}