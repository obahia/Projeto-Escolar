

#include <iostream>
using namespace std;



int main()
{

    

    int valores[] = {-3, 9, 12, -34, -2, 20, 10};

    int Soma = 0;

    int Negativo = 0;

    for (int i = 0; i < 7; i++)
    {
        
        if (valores[i] > 0)
        {

            Soma = Soma + valores[i];
        }

        else
        {

            Negativo++;
        }
    }

    cout << "Soma dos  Positivos:" << Soma << "\n" ;

    cout << "Quantidade dos Negativos:" << Negativo << "\n" ;

    return 0;
}