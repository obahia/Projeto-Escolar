#include <iostream> //Joao Bahia//
#include <cmath>
#include <locale>
using namespace std;

int peso1, planeta;
float peso2;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    cout << "Insira seu peso:  ";
    cin >> peso1;

    cout << "Mercúrio digite 1\n";

    cout << "Vénus digite 2\n";

    cout << "Marte digite 3\n";

    cout << "Júpiter digite 4\n";

    cout << "Saturno digite 5\n";

    cout << "Úrano digite 6\n";
    cin >> planeta;

    switch (planeta)
    {
    case  1:
        peso2 = peso1 / 10 * 0.37;
        cout << "Seu peso em Mercúrio é:" << peso2 << endl;
        break;
    case 2:
        peso2 = peso1 / 10 * 0.88;
        cout << "Seu peso em Vénus é:" << peso2 << endl;
        break;
    case 3:
        peso2 = peso1 / 10 * 0.38;
        cout << "Seu peso em Marte é:" << peso2 << endl;
        break;
    case 4:
        peso2 = peso1 / 10 * 2.64;
        cout << "Seu peso em Júpiter é:" << peso2 << endl;
        break;
    case 5:
        peso2 = peso1 / 10 * 1.15;
        cout << "Seu peso em Saturno é:" << peso2 << endl;
        break;
    case 6:
        peso2 = peso1 / 10 * 1.17;
        cout << "Seu peso em Úrano é:" << peso2 << endl;

        break;
    }

    return 0;
}
