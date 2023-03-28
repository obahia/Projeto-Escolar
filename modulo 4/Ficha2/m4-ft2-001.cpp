#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    float altura[22];
    float media, soma=0;

    for (i = 0; i <= 22; i++)
    {
        cout << i << "/22" << endl;
        cout << "Insira sua altura:";= 
        cin >> altura[i];
        system("cls");
    }
    for (int i = 0; i < 22; i++)
    {
        soma += altura[i];
    }
      media = soma / 22;
      cout << media << endl;

    return 0;
}
