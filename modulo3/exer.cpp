#include <iostream>
using namespace std;

int somatoria(int n)
{

    if (n == 1)
    {
        return 1;
    }
    return n + somatoria(n - 1);
}

int main(int argc, char const *argv[])
{
    int numero, resultado;
    cout << "Insira um numero: ";
    cin >> numero;

    resultado = somatoria(numero);
    cout <<"somatario:" << resultado << endl;
    return 0;
}
