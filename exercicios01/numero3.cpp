#include <iostream>
#include <cmath>
using namespace std;

float x1, x2, yi1, yi2, dist, soma;

int main()
{
    cout << "Insira os valores de X1:";
    cin >> x1;
    cout << "Y1:";
    cin >> yi1;
    cout << "X2:";
    cin >> x2;
    cout << "Y2:";
    cin >> yi2;
    soma = pow(x2 - x1, 2) + pow(yi2 - yi1, 2);
    dist = sqrt(soma);
    system("cls");
    cout << "A distancia correspondida:" << (dist)<< (endl);

    return 0;
}
