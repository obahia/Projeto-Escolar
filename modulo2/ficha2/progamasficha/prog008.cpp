// Jooa Bahia//
#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main(int argc, char const *argv[])
{
      setlocale(LC_ALL, "pt_PT.utf8");
    int num, numvezes = 0, num1 = 0;

    while (num != 0)
    {
        cout << " Insira 0 para sair." << endl;
        cout << " Este programa só calcula a média de números pares" << endl;
        cout << " Insira um número:";
        cin >> num;
        if (num != 0)
        {
            if (num % 2 == 0)
            {
                num1 = num1 + num;
                numvezes++;
            }
            else
            {
                system("cls");
            }
        }
        else
        {
            system("cls");
        }
        
    }
    numvezes = num1 / numvezes;

    cout << "Sua média é:" << numvezes << endl;
    return 0;
}
