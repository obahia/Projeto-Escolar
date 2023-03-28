#include <iostream>
using namespace std;
#define DIM 10

int valores[DIM] = {4, 2, 9, 7, 5, 1, 6, 0, 8, 3};

void ordena_v()
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

void soma_v()
{
    int soma = 0, i;

    for (i = 0; i < DIM; i++)
    {
        soma = valores[i] + soma;
    }
    cout << "A somatoria: " << soma << endl;
}

void leia_v()
{
    int num1, lin, i;
    for (i = 0; i < DIM; i++)
    {
        cout << "Insira um valor para a posicao "
             << "(" << i << ")"
             << ":" << endl;
        cin >> num1;
        valores[i] = num1;
    }
}

void mostra_v()
{
    int i;
    for (i = 0; i < DIM; i++)
    {
        cout << "v[" << i << "] = " << valores[i] << "\t";
    }
}

bool se_no_vetor()
{
    int nota;
    system("cls");
    cout << "Insira um valor: " << endl;
    cin >> nota;
    for (int i = 0; i < DIM; i++)
    {

        if (nota == valores[i])
        {
            return true;
        }
    }
    return false;
}

void menor_v()
{
    int menornum = valores[0], lin;

    for (int i = 0; i < DIM; i++)
    {

        if (valores[i] < menornum)
        {
            menornum = valores[i];
            lin = i;
        }
    }
    cout << endl;
    cout << "valores[" << lin << "]  = " << menornum << endl;
}

int proc_maior_indice_v()
{
    int maiorind = -1, i, num;
    cout << "Insira um valor: " << endl;
    cin >> num;

    for (i = 0; i < DIM; i++)
    {

        if (num == valores[i])
        {
            maiorind = i;
        }
    }
    return maiorind;
}

void menuprincipal()
{
    int opcao;
    do
    {
        puts("1 - LER\n");
        puts("2 - MOSTRAR\n");
        puts("3 - SE NO VETOR\n");
        puts("4 - MENOR \n");
        puts("5 - PROC MAIOR INDICE\n");
        puts("6 - SOMA\n");
        puts("7 - ORDEM DECRESCENTE \n");
        cout << "\nInsira sua opcao: ";
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            leia_v();

            break;

        case 2:
            mostra_v();
            system("pause");
            system("cls");

            break;
        case 3:
            se_no_vetor();
            system("pause");
            system("cls");

            break;

        case 4:
            menor_v();
            system("pause");
            system("cls");

            break;

        case 5:
              if (proc_maior_indice_v())
            {
                cout << "Seu valor esta na matriz\n"
                     << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
            system("pause");
            system("cls");

            break;
        case 6:
            soma_v();
            system("pause");
            system("cls");

            break;
        case 7:
            ordena_v();
            system("pause");
            system("cls");
        }

    } while (opcao != 0);
}

int main()
{
    menuprincipal();
    return 0;
}
