#include <iostream>
#include <locale>
using namespace std;

const int DIM = 7;

int valores[DIM] = {54, 35, 67, 97, 101, 43, 153};

void selectsort5()
{
    int i, j, aux;
    for (i = 1; i < DIM; i++)
    {
        aux = valores[i];
        for (j = i - 1; (j >= 0) && (aux > valores[j]); j--)
            valores[j + 1] = valores[j];
        valores[j + 1] = aux;
    }
    cout << "{" << valores[0];

    for (i = 1; i < DIM; i++)
    {
        cout << ", " << valores[i];
    }
    cout << "}\n";
}

void insertsort4()
{
    int i, j, aux;
    for (i = 1; i < DIM; i++)
    {
        aux = valores[i];
        for (j = i - 1; (j >= 0) && (aux < valores[j]); j--)
            valores[j + 1] = valores[j];
        valores[j + 1] = aux;
    }
    cout << "{" << valores[0];

    for (i = 1; i < DIM; i++)
    {
        cout << ", " << valores[i];
    }
    cout << "}\n";
}

void menorindice3()
{
    int menornum = INT_MAX, i, posmenor;

    for (i = 0; i < DIM; i++)
    {
        if (valores[i] < menornum)
        {
            menornum = valores[i];
            posmenor = i;
        }
    }
    cout << "Menor quilometragem percorrida: " << menornum << endl;
    cout << "Seu índice: " << posmenor << endl;
}

void verquilometros1()
{
    for (int i = 0; i < DIM; i++)
    {
        cout << valores[i] << "\t";
    }
    cout << endl;
}

void maiorindice2()
{
    int maiornum = INT_MIN, i, posmaior;

    for (i = 0; i < DIM; i++)
    {

        if (valores[i] > maiornum)
        {
            maiornum = valores[i];
            posmaior = i;
        }
    }

    cout << "A maior quilometragem percorrida foi: " << maiornum << endl;
    cout << "Seu índice: " << posmaior << endl;
}

void menuprincipal()
{
    int opcao;
    do
    {
        puts("1 - Ver quilometros\n");
        puts("2 - Maior índice\n");
        puts("3 - Menor índice\n");
        puts("4 - Ordem  crescente dos quilómetros\n");
        puts("5 - Ordem descrecente dos quilómetros\n");

        cout << "\nInsira sua opção: ";
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            verquilometros1();

            break;

        case 2:
            maiorindice2();
            system("pause");
            system("cls");

            break;
        case 3:
            menorindice3();
            system("pause");
            system("cls");

            break;

        case 4:
            insertsort4();
            system("pause");
            system("cls");

            break;

        case 5:
            selectsort5();
            system("pause");
            system("cls");

            break;
        }

    } while (opcao != 0);
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    menuprincipal();
    return 0;
}
