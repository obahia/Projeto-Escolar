#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;

struct CONTACTO
{
    char nome[100];
    char tlm[12];
    char aniv[12];
};

int menu_principal ()
{
    system("cls");
    int OpP;
    cout << "\n\n=========================TRATAMENTO DE FICHEIROS==========================\n\n";
    cout << "1 - Mostrar (ler) conteúdo do ficheiro\n\n";

    cout << "2 - Acrescentar uma pessoa ao ficheiro\n\n";

    cout << "3 - Limpar conteúdo do ficheiro e acrescentar uma pessoa\n\n";

    cout << "\n0 - Sair";
    cout << "\n\n==========================================================================\n\n";
    cout << "Opção: ";
    cin >> OpP;
    return OpP;
}

void ler_ficheiro()
{
    arquivo.open("pessoas.txt", ios::in);

    if (arquivo.is_open())
    {
        while (getline(arquivo, linha))
        {
            cout << "Nome: " << linha << endl;

            getline(arquivo, linha);
            cout << "Idade: " << linha << endl;

            getline(arquivo, linha);
            cout << "Nacionalidade: " << linha << endl << "\n";
        }
    }
    else
    {
        cout << "NAO FOI POSSIVEL ABRIR ARQUIVO\n";
    }
}
void acrescentar_uma_pessoa()
{
}
void apagar_e_acrescentar_uma_pessoa()
{

}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    CONTACTO inform;
    fstream arquivo;
    char opc = 's';
    string linha;

    arquivo.open("pessoas.txt", ios::out);
    system("cls");
    cout << "Deseja inserir um Cliente?[s/n]: ";
    cin >> opc;
    system("cls");

    while ((opc == 's') || (opc == 'S'))
    {
        cin.ignore();
        cout << "Insira um nome: ";
        getline(cin, inform.nome);
        arquivo << inform.nome << endl;
        cout << "Insira a idade: ";
        cin >> inform.idade;
        arquivo << inform.idade << endl;
        cin.ignore();
        cout << "Insira a nacionalidade: ";
        getline(cin, inform.nacio);
        arquivo << inform.nacio << "\n";

        cout << "\n\nInserir novo cliente?[s/n]";
        cin >> opc;
        system("cls");
    }

    arquivo.close();

    arquivo.open("pessoas.txt", ios::in);

    if (arquivo.is_open())
    {
        while (getline(arquivo, linha))
        {
            cout << "Nome: " << linha << endl;

            getline(arquivo, linha);
            cout << "Idade: " << linha << endl;

            getline(arquivo, linha);
            cout << "Nacionalidade: " << linha << endl
                 << "\n";
        }
    }
    else
    {
        cout << "NAO FOI POSSIVEL ABRIR ARQUIVO\n";
    }

    return 0;
}
