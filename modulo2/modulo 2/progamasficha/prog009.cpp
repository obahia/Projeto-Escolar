// Jooa Bahia//   
#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int idade, qmulher = 0, iddmaior = 0, iddmenor = 1000, mediasal=0;
float sal, media = 0,somasal=0;
char sexo;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    do
    {
        cout << "Insira sua idade:" << endl;
        cin >> idade;

        if (idade > 0)
        {
            cout << "Insira seu sexo (M) (F):";
            cin >> sexo;
            cout << "Insira seu salário:";
            cin >> sal;

            somasal = somasal + sal;

            mediasal++;
            if (idade > iddmaior)
            {
                iddmaior = idade;
            }
            
            if (idade < iddmenor)
            {
                iddmenor = idade;
            }

            if (sexo = "F" || sal <= 1000)
            {
                qmulher++;
            }
        }
    } while (idade != 0  );
       
       media = somasal / mediasal;
       cout << "Sua média salarial é:" << media << endl;
       cout << "Quantidade de mulheres que recebem 1000 ou menor:" << qmulher << endl;
       cout << "A maior idade é:" << iddmaior << endl;
       cout << "A menor idade é:" << iddmenor << endl;
       
}
