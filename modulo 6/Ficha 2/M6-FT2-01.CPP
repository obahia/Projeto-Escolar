#include <iostream>
#include <string>
#include <locale>
using namespace std;

struct Aluno
{
    string nome;
    float nota;
    Aluno *seg;
};

Aluno *inicio = NULL;

int menu()
{
    system("cls");
    int OpP;
    cout << "\n\n=========================MENU==========================\n\n";
    cout << "1 - Inserir um novo registo de aluno\n\n";

    cout << "2 - Eliminar um registo contendo um determinado nome \n\n";

    cout << "3 - Procurar por um registo com um dado nome\n\n";

    cout << "4 - Listar todos os registos \n\n";
    cout << "\n0 - Sair";
    cout << "\n\n=========================================================\n\n";
    cout << "Opção: ";
    cin >> OpP;
    return OpP;
}

void Registo()
{
    Aluno *novAluno;

    novAluno = new Aluno;
    cout << "Insira o nome do aluno: ";
    cin.ignore();
    getline(cin, novAluno->nome);
    cout << "Insira a nota do aluno: ";
    cin >> novAluno->nota;

    if (inicio == NULL)
    {
        inicio = novAluno;
        novAluno->seg = NULL;
    }
    else
    {
        novAluno->seg = inicio;
        inicio = novAluno;
    }
}

void Eliminar()
{
    string RemAl;

    cout << "Insira o nome do aluno que gostaria de remover: ";
    cin.ignore();
    getline(cin, RemAl);

    Aluno *atual = inicio;
    Aluno *anterior = NULL;

    while (atual != anterior)
    {
        if (atual->nome == RemAl)
        {
            if (anterior == NULL)
            {
                inicio = atual->seg;
                delete atual;
                cout << "\n\nRegisto eliminado \n\n";
                system("pause");
                return;
            }
            else
            {
                anterior->seg = atual->seg;
                delete atual;
                cout << "\n\nRegisto eliminado \n\n";
                system("pause");
                return;
            }
        }
    }
}

void Pesquisar()
{
    if (inicio == NULL)
    {
        cout << "\n\n\nLista Vazia!\n\n\n";
        system("pause");
        return;
    }

    int pos_lista = 0;
    string PesquiAl;

    cout << "Insira o nome do aluno que gostaria de pesquisar: ";
    cin.ignore();
    getline(cin, PesquiAl);
    system("cls");

    Aluno *atual = inicio;
    Aluno *anterior = NULL;

    while (atual != NULL)
    {
        pos_lista++;

        if (atual->nome == PesquiAl)
        {
            cout << "Posição: " << pos_lista << "\n\n";
            cout << "Nome: " << atual->nome << "\n\n";
            cout << "Nota: " << atual->nota << "\n\n";
            system("pause");
        }

        anterior = atual;
        atual = atual->seg;
    }
}

void Listar()
{
    Aluno *atual = inicio;

    int N_Registos = 0;
    if (inicio == NULL)
    {
        cout << "\n\n\nLista Vazia!\n\n\n";
        system("pause");
        return;
    }

    while (atual != NULL)
    {
        N_Registos++;
        cout << "\n\n REGISTROS \n\n";
        cout << "(" << N_Registos << ")"
             << " NOME: " << atual->nome << " ||"
             << " NOTA: " << atual->nota << "\n\n";

        atual = atual->seg;
    }
    system("pause");
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    int opcao;

    do
    {
        opcao = menu();
        if (opcao != 0)
        {
            switch (opcao)
            {
            case 1:
                system("cls");
                Registo();
                break;

            case 2:
                system("cls");
                Eliminar();
                break;
            case 3:
                system("cls");
                Pesquisar();
                break;
            case 4:
                system("cls");
                Listar();

                break;

            default:

                break;
            }
        }

    } while (opcao != 0);

    return 0;
}
