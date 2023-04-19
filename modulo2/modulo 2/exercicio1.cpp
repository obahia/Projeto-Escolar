#include <iostream>
#include <locale>
using namespace std;

int num1, num2, num3;

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Insira o primeiro número:\n";
    cin >> num1;
    cout << "Insira o segundo número:\n";
    cin >> num2;
    cout << "Insira o terceiro número:\n";
    cin >> num3;

    system("cls");

    if (num1 > num3)
    {
        cout << "Primeiro numero é maior\n"
             << num1 << endl;
    }
    else if (num2 > num3)
    {
        cout << "Segundo numero é maior\n"
             << num2 << endl;
    }
    if (num3 > num2)
    {
        cout << "Terceiro número é maior\n"
             << num3 << endl;
    }

    return 0;
}
