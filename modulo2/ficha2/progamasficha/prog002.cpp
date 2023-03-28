#include <iostream>    //Joao Bahia//
#include <cmath>
#include <locale>
using namespace std;

int nm1, nm2;
char operacao;

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    cout << "Insira o primeiro numero:";
    cin >> nm1;
    cout << "Insira o segundo numero:";
    cin >> nm2;
    cout << "Digite a operaçao desejada:";
    cin >> operacao;
    switch (operacao)
    {
    case '+':
        cout << nm1 << " + " << nm2 << " = " << nm1 + nm2 << endl;
        break;
    case '-':
        cout << nm1 << "-" << nm2 << "=" << nm1 - nm2 << endl;
        break;
    case '*':
        cout << nm1 << "*" << nm2 << "=" << nm1 * nm2 << endl;
        break;
    case '/':
        cout << nm1 << "/" << nm2 << "=" << nm1 / nm2 << endl;
        break;
    }
    return 0;
}
