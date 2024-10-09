#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    cout << fixed << setprecision(2); // Set the precision once

    switch (x) {
        case 1:
            cout << "Total: R$ " << 4.00 * y << endl;
            break;
        case 2:
            cout << "Total: R$ " << 4.50 * y << endl;
            break;
        case 3:
            cout << "Total: R$ " << 5.00 * y << endl;
            break;
        case 4:
            cout << "Total: R$ " << 2.00 * y << endl;
            break;
        case 5:
            cout << "Total: R$ " << 1.50 * y << endl;
            break;
        default:
            cout << "Invalid option" << endl; // In case x is not 1-5
            break;
    }

    return 0;
} //Had the idea myself, but had to use ChatGPT to be sure.
