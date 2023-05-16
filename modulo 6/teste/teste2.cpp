#include <iostream>
using namespace std;

int *Alocamentos(int n)
{
    int *pont;

    pont = new int[n];

    return pont;
}

int main(int argc, char const *argv[])
{

    int *vetor, elemento, tamanho;

    cout << "Insira o tamanho do vetor: ";
    cin >> tamanho;
    vetor = Alocamentos(tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        cout << "\nDigite o valor do " << "[" << i + 1 << "]" << " elemento:";
        cin >> vetor[i];
    }
    for (int j = 0; j < tamanho; ++j)
    {
        cout << "\n"  << vetor[j] << "\n";
    }
    delete[] vetor;

    return 0;
}
