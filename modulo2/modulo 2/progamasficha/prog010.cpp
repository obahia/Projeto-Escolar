// Jooa Bahia//
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int random, soma1 = 0, num = 0;

    srand((unsigned)time(NULL));

    do
    {
        cout << "Introduza um numero" << endl;
        cin >> num;
    } while (num <= 0 || num > 10);
    do
    {
        random = 1 + (rand() % 10);
        soma1 = soma1 + random;
        cout << random << endl;
    } while (random != num);
    cout << "A soma:" << soma1 << endl;

    return 1;
}