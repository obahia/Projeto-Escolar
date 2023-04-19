// Jooa Bahia//
#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int num, i, j;
char let;

int main(int argc, char const *argv[])
{
    cout << "Insira um numero:";
    cin >> num;
    cout << "Insira um caracterer: ";
    cin >> let;
    for (i = 1; i <= num; i++)
    {
        
        for (j = 1; j <= num; j++)
        {
            cout << let;
        }
        cout << "\n";
    }

    return 0;
}
