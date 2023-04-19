#include <iostream>
#include <string>
#include <locale>
using namespace std;

#define MAX_CLIENTE 20
int N_cliente = 8;
struct Cliente
{
    int idCliente;
    string nome;
    string email;
    int tlm;
};
Cliente clientes[MAX_CLIENTE]{
    {1, "João Pinto", "j.pinto@gmail.com", 912352513},
    {2, "Ana Sousa", "ana_sousa@gmail.com", 913357788},
    {3, "Rita Santos", "rs@sapo.pt", 936789147},
    {4, "Rui Lopes", "ruislopes@hotmail.com", 923852456},
    {5, "Carlos Torres", "carlosmt@ctt.com", 967258456},
    {6, "Miguel Castro", "migas@sapo.pt", 968124637},
    {7, "Teresa Silva", "tsmp@gmail.com", 912785423},
    {8, "Lucinda Sá", "lmss@hotmail.com", 934254713}
    };

int menu_principal()
{
    int op;
    cout << "\n\n========MENU PRINCIPAL========\n\n";
    cout << "1 - Menu Clientes\n";
    cout << "2 - Menu Automóveis\n";
    cout << "3 - Pesquisas\n";
    cout << "0 - Sair\n";
    cout << "==============================\n\n";
    cout << "Opção: ";
    cin >> op;

    return op;
}
int novo_cliente()
{
    system("cls");
    if (N_cliente < MAX_CLIENTE)
    {
        cin.ignore();
        cout << "========NOVO CLIENTE========\n\n";
        cout << "Insira o seu nome: ";
        getline(cin, clientes[N_cliente].nome);
        cout << "Insira seu email: ";
        getline(cin, clientes[N_cliente].email);
        cout << "Insira seu telemóvel: ";
        cin >> clientes[N_cliente].tlm;
        N_cliente++;
        return 1;
    }
    else
    {
        return 0;
    }
}

int menu_clientes()
{
    int OpC;
    system("cls");
    cout << "\n\n========MENU CLIENTES========\n\n";
    cout << "1 - Inserir clientes\n";
    cout << "2 - Ver todos os clientes\n";
    cout << "3 - Mostrar dados do cliente pelo código\n";
    cout << "==============================\n\n";
    cout << "Opção: ";
    cin >> OpC;
    return OpC;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    int opcao, opcao_cliente, resul;

    do
    {
        opcao = menu_principal();
        switch (opcao)
        {
        case 1:
            do
            {
                opcao_cliente = menu_clientes();
                switch (opcao_cliente)
                {
                case 1:
                    resul = novo_cliente();
                    if (resul)
                    {

                        cout << "\nAdicionado\n";
                    }
                    else
                    {
                        cout << "Não foi possível adicionar! Limite ultrapassado!\n\n";
                    }
                    system("pause");

                    ;
                    break;

                default:
                    break;
                }
            } while (opcao != 0);

            break;

        default:
            cout << "\n\n ERRO 404 OPÇÃO INVÁLIDA  \n\nTENTE NOVAMENTE\n\n";
            system("pause");
            opcao = -1;
            break;
        }
    } while (opcao != 0);
    system("cls");
    cout << "Obrigado por usar este programa!\n\n";

    return 0;
}
