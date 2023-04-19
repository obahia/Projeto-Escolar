#include <iostream> //Joao Bahia//
#include <cmath>
using namespace std;
#include <locale>
int ano;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");   
    cout << "Insira o ano civil:" << endl;
    cin >> ano;

    if (ano % 400 == 0)
        cout << "É bissexto" << endl;
    else if ((ano % 4 == 0) && (ano % 100 != 0))
        cout << "É bissexto" << endl;
    else
        cout << "Não é bissexto" << endl;

    return 0;
}
