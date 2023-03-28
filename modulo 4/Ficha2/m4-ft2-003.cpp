#include <iostream>
using namespace std;

#define n 5
int main()
{
    int i, soma = 0;
    int x[n];
    int y[n];

    for (i = 1; i <= n; i++)
    {
        cout << i << "/" << n  << " " << "Insira um valor de x: ";
        cin >> x[i];

        cout << i << "/" << n << " " <<  "Insira um valor de y: ";
        cin >> y[i];
        soma += (x[i] * y[i]);
    }
     cout << endl;
     cout << "Produto escalavel: " << soma;
    return 0;
}
