// Joao Bahia
#include <iostream>
using namespace std;

int i, j, linha = 5;

int main(int argc, char const *argv[])
{
    // triangulo de cima

    for (i = 0; i <= linha; i++)
    {
        for (j = 1; j <= linha - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // triangulo de baixo

    for (i = linha - 1; i >= 1; i--)
    {
        for (j = 1; j <= linha - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
