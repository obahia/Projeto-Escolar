#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // ofstream = saida  ifstream = entrada
    // ofstream, ifstream, fstream;
    // ios::app

    ofstream arquivoS;

    arquivoS.open("TESTE_ARQUIVO.txt");

    arquivoS << "BAHIA CURSOS\n";
    arquivoS << "CRB BAHIA\n";
    arquivoS << "ACESSA MEU INSTAGRAM @obahia\n";

    arquivoS.close();

    ifstream arquivoI;
    string linha;

    arquivoI.open("TESTE_ARQUIVO.txt");

    if (arquivoI.is_open())
    {
        while (getline(arquivoI, linha))
        {
            cout << linha << endl;
        }
        arquivoI.close();
    } else
    {
        cout << "NAO FOI POSSIVEL ABRIR O ARQUIVO" << endl;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    fstream arquivo;
    char opc = 's';
    string nome, linha;

    arquivo.open("arquivomeu.txt", ios::out);

    while ((opc == 's') && (opc == 'S'))
    {
        cout << "Insira um nome: ";
        cin >> nome;
        arquivo << nome << "\n";
        cout << "\n\nDigitar novo nome?[s/n]";
        cin >> opc;
        system("cls");
    }

    arquivo.close();

    arquivo.open("arquivomeu.txt", ios::in);
    cout << "Nomes digitados: " << endl;

    if (arquivo.is_open())
    {
        while (getline(arquivo, linha))
        {
            cout << linha << endl;
        }
    }
    else
    {
        cout << "NAO FOI POSSIVEL ABRIR ARQUIVO\n";
    }

    return 0;
}
