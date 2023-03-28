#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int i;
    int contagem[n];

    for (i = 0; i < n; i++)
    {

        cout << "Insira o numero " << i + 1 << ": ";

        cin >> contagem[i];
    }

    for (i = n - 1; i >= 0; i--)
    {
        cout << contagem[i] << " ";
    }
    cout << endl;
    return 0;
}
