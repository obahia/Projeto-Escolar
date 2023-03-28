#include <iostream>
#include <locale>
using namespace std;

// Declaração de Funções

int Menu();

void IntroduzirSequencia();

int CodificarSequencia();

int DescodificarSequencia();

int Sair();

int n1, n2, n3, n4;

// Função Principal

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    int MenuEscolhido;

    do
    {
        MenuEscolhido = Menu();

        switch (MenuEscolhido)
        {
        case 1:

            IntroduzirSequencia();
            break;

        case 2:

            CodificarSequencia();
            break;

        case 3:

            DescodificarSequencia();
            break;

        case 0:

            exit(0);
            break;

        default:

            break;
        }
    } while (MenuEscolhido != 0);

    return 0;
}

// Definição das funções abaixo:

// Menu Inicial

int Menu()
{

    int EscolhaMenu;

system("cls");
    cout << "PROGRAMA DE CODIFICAÇÃO - CENTRAL SECRET\n";
    cout << "1 - Introduzir Sequência\n";
    cout << "2 - Codificar Sequência\n";
    cout << "3 - Descodificar Sequência\n";
    cout << "0 - Sair\n";
    cin >> EscolhaMenu;

    system("cls");

    return EscolhaMenu;
}

void IntroduzirSequencia()
{
    cout << "primeiro numero: ";
    cin >> n1;
    cout << "segundo numero: ";
    cin >> n2;
    cout << "terceiro numero: ";
    cin >> n3;
    cout << "quarto numero: ";
    cin >> n4;
   
    system("pause");
}

int CodificarSequencia()
{
    
    system("pause");
    return 0;
}

int DescodificarSequencia()
{
    return 0;
}

int Sair()
{
    return 0;
}