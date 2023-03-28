// Joao Bahia
#include <iostream>
using namespace std;

int main()
{
    int num, i, mult;
    do
    {

        cout << "Insira um numero:";
        cin >> num;
        mult = 1;
        cout << num << "! = ";
        for (i = 1; i <= num; i++)
        {
            mult *= i;

            cout << i << "*";
        }
        cout << " = " << mult << endl;

    } while (num > 0);

    return 0;
}
