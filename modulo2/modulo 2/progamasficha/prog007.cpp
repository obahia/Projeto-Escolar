// Joao Bahia//
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int nvezes = 0, op=0, op2 = 0;
    double media = 0;

    cout << " Digite " << -99 << " para sair. ";

    while (op != -99)
    {
        cout << " Insira um numero:";
        cin >> op;
        if (op != -99)
        {
            op2 = op2 + op;
            nvezes++;
        }
        else
        {
            system("cls");
        }
    }
    media = op2 / nvezes;
    cout << "Sua media e:" << media << endl;
    cout << "A soma e:" << op2 << endl;

    return 0;
}
