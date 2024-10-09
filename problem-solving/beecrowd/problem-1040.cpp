#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float N1, N2, N3, N4, N5;
    cin >> N1 >> N2 >> N3 >> N4;

    float a = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;
    cout << fixed << setprecision(1);

    if (a >= 7.0)
    {
        cout << "Media: " << a << endl;
        cout << "Aluno aprovado." << endl;
    }
    else if (a < 5.0)
    {
        cout << "Media: " << a << endl;
        cout << "Aluno reprovado." << endl;
    }
    else
    {
        cout << "Media: " << a << endl;
        cout << "Aluno em exame." << endl;
        cin >> N5;
        cout << "Nota do exame: " << N5 << endl;
        a = (a + N5) / 2;
        if (a >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << a << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << a << endl;
        }
    }
    return 0;
}