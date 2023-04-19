#include <iostream>
#include <string>
#include <locale>
using namespace std;
#define MAX_AUTO 20
#define MAX_CLIENTE 20
int N_cliente = 8;
struct Automovel
{
    int idAuto;
    int idCliente;
    string marca;
    string modelo;
    int ano;
    string num_chassi;
};
Automovel automoveis[MAX_AUTO]{
    //IdAuto/IdCliente/Marca/Modelo/Ano/Placa
    {1, 7, "Peugeot", 308, 2020, "28Y9D"},
    {2, 2, "Honda", "Jazz", 2018, "97P4T"},
    {3, 6, "Audi", "A3", 2019, "55FK8"},
    {4, 3, "Seat", "Ibiza", 2020, "H1M78"},
    {5, 2, "Dacia", "Sandero", 2019, "W51S9"},
    {6, 1, "Mercedes", "Classe A", 2017, "J5J91"},
    {7, 4, "Opel", "Corsa", 2015, "4Z4B5"},
    {8, 5, "Toyota", "Corolla HB", 2022, "L4U78"},
    {9, 8, "Citroen", "C4", 2021, "1D83U"},
    {10, 5, "Renault", "Megane", 2016, "3G5R7"},
};

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
    cout << "\n0 - Sair";
    cout << "\n\n==============================\n\n";
    cout << "Opção: ";
    cin >> OpC;
    return OpC;
}

int mostrar_cliente(int id)
{

    if (id < N_cliente + 1)
    {
        id--;
        cout << "(" << id + 1 << ")"
             << " " << clientes[id].nome << " " << clientes[id].email << " " << clientes[id].tlm << "\n\n";

        return 1;
    }
    else
    {
        cout << "ID não encontrado!";
        return 0;
    }
}

void mostrar_todos_clientes()
{
    system("cls");
    cout << "\n\n";
    for (int i = 0; i < N_cliente; i++)
    {
        cout << "(" << i + 1 << ")"
             << " " << clientes[i].nome << " " << clientes[i].email << " " << clientes[i].tlm << "\n\n";
    }
    system("pause");
}

int menu_automoveis()
{
    int OpA;
    cout << "\n\n========MENU AUTOMÓVEIS========\n\n";
    cout << "1 - Inserir novo automóvel\n";
    cout << "2 - Ver todos os automóveis\n";
    cout << "3 - Mostrar dados de um atomóvel\n";
    cout << "\n0 - Sair";
    cout << "\n\n===================================\n\n";
    cout << "Opção: ";
    cin >> OpA;
    return OpA;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    int opcao, opcao_cliente, resul, Idcliente, opcao_automovel;

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

                    break;

                case 2:

                    mostrar_todos_clientes();

                case 3:
                    system("cls");
                    cout << "Insira o ID para pesquisar: ";
                    cin >> Idcliente;
                    system("cls");
                    mostrar_cliente(Idcliente);
                    system("pause");

                default:
                    break;
                }

            } while (opcao_cliente != 0);
            system("cls");

            break;
        case 2:
            system("cls");
            do
            {
                opcao_automovel = menu_automoveis();
                switch (opcao_automovel)
                {
                case 1:

                    break;

                default:
                    break;
                }
            } while (opcao_automovel != 0);
            system("cls");

            break;

        default:
            cout << "\n\n ERRO 404 OPÇÃO INVÁLIDA  \n\nTENTE NOVAMENTE\n\n";
            system("pause");
            system("cls");
            opcao = -1;
            break;
        }
    } while (opcao != 0);
    system("cls");
    cout << "Obrigado por usar este programa!\n\n";

    return 0;
}
