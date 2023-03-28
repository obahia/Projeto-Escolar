#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

float altura, imc, peso;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    cout << "Insira sua altura:";
    cin >> altura;
    cout << "Insira seu peso:";
    cin >> peso;
    imc = peso / (altura * altura);
      
    if (imc >= 40)
    {
        cout << "Seu imc é:" << imc << endl
             << "Obesidade nível 3\n";
    }
    else if (imc <= 39.9 && imc >= 35)                      
    {
        cout << "Seu imc é:" << imc << endl
             << "Obesidade nível 2\n";
    }
    else if (imc <= 34.9 && imc >= 30)
    {
        cout << "Seu imc é:" << imc << endl
             << "Obesidade grau 1\n";
    }
    else if (imc <= 29.9 && imc >= 25)
    {
        cout << "Seu imc é:" << imc << endl
             << "Sobrepeso\n";
    }
    else if (imc <= 24.9 && imc >= 18.6)
    {
        cout << "Seu imc é:" << imc << endl
             << "Peso normal\n";
    }
    else if (imc <= 18.5)
    {
        cout << "Seu imc é:" << imc << endl
             << "Abaixo do peso\n";
    }

    return 0;
}