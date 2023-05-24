//João Bahia 10E N:08


#include <iostream>
#include <string>
#include <locale>
using namespace std;

struct Aluno
{
    string nome;
    float nota;
    Aluno *px;
    Aluno *ant;
};

Aluno *inicio = NULL;

int menu()
{
    system("cls");
    int OpP;
    cout << "\n\n=========================MENU==========================\n\n";
    cout << "1 - Inserir um novo registo de aluno\n\n";

    cout << "2 - Eliminar um registo contendo um determinado nome \n\n";

    cout << "3 - Comprimento da lista\n\n";

    cout << "4 - Listar todos os registos \n\n";

    cout << "5 - Esvaziar lista \n\n";
    cout << "\n0 - Sair";
    cout << "\n\n=========================================================\n\n";
    cout << "Opção: ";
    cin >> OpP;
    return OpP;
}

void Registo()
{

    Aluno *novoAluno = new Aluno;
    cout << "Insira o nome do aluno: ";
    cin.ignore();
    getline(cin, novoAluno->nome);
    cout << "Insira a nota do aluno: ";
    cin >> novoAluno->nota;

    if (inicio == NULL || novoAluno->nome < inicio->nome)
    {
        novoAluno->px = inicio;
        novoAluno->ant = NULL; // Novo aluno é o primeiro, portanto não há aluno anterior a ele
        if (inicio != NULL)
        inicio->ant = novoAluno; // Atualiza o ponteiro 'ant' do aluno anterior
        inicio = novoAluno;
    }
    else
    {
        Aluno *atual = inicio;

        while (atual->px != NULL && novoAluno->nome > atual->px->nome)
        {
            atual = atual->px;
        }

        novoAluno->px = atual->px;
        novoAluno->ant = atual; // Define o aluno anterior ao novo aluno
        if (atual->px != NULL)

        atual->px->ant = novoAluno; // Atualiza o ponteiro 'ant' do aluno seguinte
        
        atual->px = novoAluno;
    }
}

void Eliminar_Pelo_Nome()
{
    string RemAl;
    cin.ignore();
    cout << "Insira o nome do aluno que gostaria de remover: ";

    getline(cin, RemAl);

    Aluno *atual = inicio;
    Aluno *anterior = NULL;

    while (atual != NULL)
    {
        if (atual->nome == RemAl)
        {
            if (anterior == NULL)
            {
                inicio = atual->px;
                delete atual;
                cout << "\n\nRegisto eliminado \n\n";
                system("pause");
                return;
            }
            else
            {
                anterior->px = atual->px;
                delete atual;
                cout << "\n\nRegisto eliminado \n\n";
                system("pause");
                return;
            }
        }
        anterior = atual;
        atual = atual->px;
    }
}

void Comprimento()
{

    Aluno *aux = inicio; // variável auxiliar para percorrer a lista

    int Tamanho = 0;
    if (inicio == NULL)
    {
        cout << "\n\n\nLista Vazia!\n\n\n";
        system("pause");
        return;
    }
    cout << "\n\n      COMPRIMENTO DA LISTA \n\n";
    while (aux != NULL)
    {

        Tamanho++;

        aux = aux->px;
    }
    cout << "       SEU TAMANHO: " << Tamanho << "\n\n";

    system("pause");
}

void Listar_Ordem()
{

    Aluno *aux = inicio; // variável auxiliar para percorrer a lista

    int N_Registos = 0;
    if (inicio == NULL)
    {
        cout << "\t\t\tLista Vazia!\n\n\n";
        system("pause");
        return;
    }
    cout << "\n\n REGISTROS \n\n";
    while (aux != NULL)
    {

        N_Registos++;

        cout << "(" << N_Registos << ")"
             << " NOME: " << aux->nome << " ||"
             << " NOTA: " << aux->nota << " ||"
             << "ENDEREÇO: " << aux << " ||"
             << " O PROXIMO ENDEREÇO " << aux->px << "||"
             << " O ENDEREÇO ANTERIOR " << aux->ant << "\n\n";

        aux = aux->px;
    }

    system("pause");
}

void Esvaziar_Lista()
{
    Aluno *atual = inicio;
    Aluno *anterior = NULL;
    int aux = NULL;

    while (atual != NULL)
    {

        inicio = atual->px;
        delete atual;
        atual = inicio;
    }
    cout << "\t\t\tLISTA ESVAZIADA\n\n\n";
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
                Eliminar_Pelo_Nome();
                break;
            case 3:
                system("cls");
                Comprimento();
                break;
            case 4:
                system("cls");
                Listar_Ordem();

                break;
            case 5:
                system("cls");
                Esvaziar_Lista();

            default:

                break;
            }
        }

    } while (opcao != 0);

    return 0;
}
