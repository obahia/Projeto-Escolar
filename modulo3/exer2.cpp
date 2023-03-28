#include <iostream>
#include <windows.h>

using namespace std;

int a, cont, n = 100;

void contagem(int x)
{
    int i;
    for (i = 0; i <= x; i++)
    {
        cout << "Tarefa \t\t" << i << "/" << x;
        Sleep(1000);
        system("cls");
    }
}

int loading(int x)
{
   
    cont++;
    if (cont >= n)
    {
        cout << char(219);
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{

    system("color 02");

    contagem(n);
    loading(a);

    return 0;
}
