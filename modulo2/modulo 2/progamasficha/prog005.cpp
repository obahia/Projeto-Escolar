#include <iostream> //Joao Bahia
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{

    int Pares = 0, Impares = 0, Op = -1;
    cout << " Digite " << 0 << " para sair. ";

    do
    {
        cout << " Insira um numero:";
        cin >> Op;
        if (Op != 0)
        {
            if (Op % 2 == 0)
            {
                Pares++;
            }
            else
            {
                Impares++;
            }
        }
    } while (Op != 0);
    cout << "\n Pares: " << Pares << " \n Impares: " << Impares << endl;

    return 0;
}