#include <iostream>
#include <string>
#include <locale>
using namespace std;
#define MAX 5
struct BANDA
{
    string NomeB;
    string TipomusicaB;
    int Nintegrantes;
    int ranking;
};



void editar(BANDA editor[], int n_bandas, int dado_armazernar)
{

    if (dado_armazernar >= 0 && dado_armazernar < n_bandas)
    {
        cin.ignore();
        cout << "\n Nome da banda: ";
        getline(cin, editor[dado_armazernar].NomeB);

        cout << "\n Gênero musical: ";
        getline(cin, editor[dado_armazernar].TipomusicaB);
        cout << "\n Quantos integrantes: ";
        cin >> editor[dado_armazernar].Nintegrantes;
    }
    else
    {
        cout << "Limite ultrapassado!";
    }
}

void lista(BANDA listagem[], int n_bandas)
{

    if (n_bandas > 0)
    {
        for (int i = 0; i < n_bandas; i++)
        {
            cout << "(" << i << ")" << endl;
            cout << "Nome da banda: " << listagem[i].NomeB << " #" << listagem[i].ranking << endl;
            cout << "Gênero musical: " << listagem[i].TipomusicaB << endl;
            cout << "Número de integrantes: " << listagem[i].Nintegrantes << endl;
        }
    }
    else
    {
        cout << "Nenhuma banda encontrada!";
        system("pause");
    }
}

int dados(BANDA band[], int numbandas)
{

    cout << "\nInsira a banda: ";

    getline(cin, band[numbandas].NomeB);
    cout << "\nInsira o gênero musical: ";

    getline(cin, band[numbandas].TipomusicaB);
    cout << "\nInsira quantos integrantes tem na banda: ";

    cin >> band[numbandas].Nintegrantes;
    cout << "\nInsira o rank da sua banda: ";

    cin >> band[numbandas].ranking;
    cin.ignore();
    system("cls");
    numbandas++;
    return numbandas;
}
void pesquisa_banda(BANDA lista_bandas[], int tamanho)
{
    string nome;
    int posicao;

    if (tamanho > 0)
    {
        cout << "\nDigite o nome da banda: ";
        cin.ignore();
        getline(cin, nome);

        posicao = -1;
        for (int i = 0; i < tamanho; i++)
        {
            if (NomeB.compare(lista_bandas[i].nome) == 0)
            {
                cout << "\nRegisto encontrado!\n\n";
                posicao = i;
            }
        }

        if (posicao == -1)
        {
            cout << "\nRegisto não encontrado!\n\n";
        }
        else
        {
            dados(lista_bandas, posicao);
        }
    }
    else
    {
        cout << "\nAinda não foram adicionadas bandas!\n\n";
    }
}

void menu()
{
    int opcao, n_banda = 0, dadinho;
    BANDA guardarD[MAX];

    do
    {
        cout << "\n\n-------------------------\n\n";
        puts("(1) - Insira a banda");
        puts("(2) - Lista");
        puts("(3) - Editar bandas");
        puts("(4) - Pesquisar bandas");
        puts("(0) - Para sair");
        cout << "\n\n-------------------------\n\n";
        cout << "\nInsira sua opção:";

        cin >> opcao;
       system("cls");

        switch (opcao)
        {
        case 1:
            cin.ignore();
            n_banda = dados(guardarD, n_banda);

            system("pause");
            system("cls");

            break;

        case 2:
            lista(guardarD, n_banda);
            system("pause");
            system("cls");

            break;
        case 3:
            lista(guardarD, n_banda);

            cout << "\n\nInsira a posição da banda que deseja alterar: " << endl;
            cin >> dadinho;
            editar(guardarD, n_banda, dadinho);
            system("pause");
            system("cls");

            break;
        case 4:
            pesquisa_bandas(guardarD,n_banda);
            system("pause");
            system("cls");

            break;
        }
    } while (opcao != 0);
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    menu();

    return 0;
}
