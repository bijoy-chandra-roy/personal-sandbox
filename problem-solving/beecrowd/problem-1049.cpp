#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x, y, z;
    cin >> x >> y >> z;

    if (x == "vertebrado")
    {
        if (y == "ave")
        {
            if (z == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else
            {
                cout << "pomba" << endl;
            }
        }
        else
        {
            if (z == "onivoro")
            {
                cout << "homem" << endl;
            }
            else
            {
                cout << "vaca" << endl;
            }
        }
    }
    else
    {
        if (y == "inseto")
        {
            if (z == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else
            {
                cout << "lagarta" << endl;
            }
        }
        else
        {
            if (z == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else
            {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
