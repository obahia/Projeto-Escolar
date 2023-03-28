#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

float raio, altura, area, litro, lata, valor;

int main(int argc, char const *argv[])
{
    cout << "Insira o raio:\n   m\r";
    cin >> raio;
    cout << "Insira a altura\n   m\r";
    cin >> altura;
    raio = M_PI * pow(raio, 2) + 2 * M_PI * raio * altura;
    litro = raio / 3;
    lata = ceil (litro / 5);
    valor = lata * 20;
    system ("cls");
    cout << "Quantos litros serao necessarios:\n" << (litro) << (endl);

    cout << "Quantas latas serao necessarias:\n" << (lata) << (endl);

    cout << "Quanto custara:\n     euros\r" << (valor) << (endl);
    

    

    return 0;
}
