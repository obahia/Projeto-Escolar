#include <iostream>
using namespace std;

int main()
{
    int i,maior = 0, iguais = 0, menor = 0;

    const int n = 5;
    int vetor[n];

    for (i = 0; i < n; i++)
    {
        cout << i+1 << "/" << n << " "  << "Insira um valor: ";
        cin >> vetor[i];

        if (vetor[i] > vetor[0])
        {
            maior++;
        }
        if (vetor[i] == vetor[0])
        {
            iguais++;
        }
        if (vetor[i] < vetor[0])
        {
            menor++;
        }
    }
    iguais--;

    cout << "\nQuantidade de valores maior que o primeiro elemento: " << maior << endl;
    cout << "Quantidade de valores iguais ao primeiro elemento: " << iguais << endl;
    cout << "Quantidade de valores menores que o primeiro elemento: " << menor << endl;

    return 0;
}
