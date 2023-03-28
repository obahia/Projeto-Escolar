#include <iostream>
using namespace std;

int main()
{
    int j, n1, n2, n3, n4, n5, maiornum = 0;
    cout << "Insira o primeiro numero: " << endl;
    cin >> n1;
    cout << "Insira o segundo numero: " << endl;
    cin >> n2;
    cout << "Insira o terceiro numero: " << endl;
    cin >> n3;
    cout << "Insira o quarto numero: " << endl;
    cin >> n4;
    cout << "Insira o quinto numero: " << endl;
    cin >> n5;

    int numero[5] = {n1, n2, n3, n4, n5};

    for (j = 0; j < 5; j++)
    {
        if (numero[j] > maiornum)
        {
            maiornum = numero[j];
        }
    }
    cout << "O maior numero: " << maiornum << endl;

    return 0;
}
