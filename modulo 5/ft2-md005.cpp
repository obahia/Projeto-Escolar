#include <iostream>
#include <string>
#include <locale>
using namespace std;
#define MAX_AUTO 20
#define MAX_CLIENTE 20
int N_cliente = 8;
int N_auto = 10;
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
    // struct do automóvel
    // IdAuto/IdCliente/Marca/Modelo/Ano/Placa
    {1, 7, "Peugeot", "308", 2020, "28Y9D"},
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

struct Cliente // struct do cliente
{
    int idCliente;
    string nome;
    string email;
    int tlm;
};
Cliente clientes[MAX_CLIENTE]{
    {1, "João Pinto", "j.pinto@gmail.com", 912352513},
    {8, "Lucinda Sá", "lmss@hotmail.com", 934254713},
    {7, "Teresa Silva", "tsmp@gmail.com", 912785423},
    {4, "Rui Lopes", "ruislopes@hotmail.com", 923852456},
    {5, "Carlos Torres", "carlosmt@ctt.com", 967258456},
    {6, "Miguel Castro", "migas@sapo.pt", 968124637},
    {3, "Rita Santos", "rs@sapo.pt", 936789147},
    {2, "Ana Sousa", "ana_sousa@gmail.com", 913357788},
};

int menu_principal() // menu principal
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

int novo_cliente() // adicionar novo cliente 1
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

int menu_clientes() // menu dos clientes
{
    int OpC;
    system("cls");
    cout << "\n\n========MENU CLIENTES========\n\n";
    cout << "1 - Inserir novo(s) cliente(s)\n";
    cout << "2 - Ver todos os clientes\n";
    cout << "3 - Mostrar dados do cliente pelo código\n";
    cout << "\n0 - Sair";
    cout << "\n\n==============================\n\n";
    cout << "Opção: ";
    cin >> OpC;
    return OpC;
}

int mostrar_cliente(int id) // mostrar cliente de acordo com o ID 3
{

    for (int i = 0; i < N_cliente; i++)
    {
        if (clientes[i].idCliente == id)
        {

            cout << "(" << id << ")"
                 << " " << clientes[i].nome << " " << clientes[i].email << " " << clientes[i].tlm << "\n\n";

            return 1;
        }
    }
    return 0;
}

void mostrar_todos_clientes() // função para mostrar todos os clientes
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

int menu_automoveis() // menu dos automóveis
{
    system("cls");
    int OpA;
    cout << "\n\n========MENU AUTOMÓVEIS========\n\n";
    cout << "1 - Inserir novo automóvel\n";
    cout << "2 - Ver todos os automóveis\n";
    cout << "3 - Mostrar dados de um automóvel\n";
    cout << "\n0 - Sair";
    cout << "\n\n===================================\n\n";
    cout << "Opção: ";
    cin >> OpA;
    return OpA;
}

int novo_automovel() // adicionar novo carro  1
{
    system("cls");
    if (N_auto < MAX_AUTO)
    {

        cout << "========NOVO AUTOMÓVEL========\n\n";
        cout << "Insira o novo id do cliente: ";
        cin >> automoveis[N_auto].idCliente;
        cin.ignore();
        cout << "Insira a marca do automóvel: ";
        getline(cin, automoveis[N_auto].marca);
        cout << "Insira o modelo do automóvel: ";
        getline(cin, automoveis[N_auto].modelo);
        cout << "Insira o ano do modelo: ";
        cin >> automoveis[N_auto].ano;
        cin.ignore();
        cout << "Insira o número do chassi: ";
        getline(cin, automoveis[N_auto].num_chassi);
        N_auto++;
        return 1;
    }
    else
    {

        return 0;
    }
}

void mostrar_todos_automoveis() // mostrar todos os carros 2
{
    system("cls");
    for (int i = 0; i < N_auto; i++)
    {
        cout << "(" << i + 1 << ") " << automoveis[i].idCliente << ", " << automoveis[i].marca << ", " << automoveis[i].modelo << ", " << automoveis[i].ano << ", " << automoveis[i].num_chassi << "\n\n";
    }
    system("pause");
}

int mostrar_automovel(int ID) // mostrar automovel de acordo com o ID do cliente 3
{
    int Ncarros = 0;
    cout << "ID do cliente: " << ID << "\n\n";
    for (int i = 0; i < N_auto; i++)
    {
        if (automoveis[i].idCliente == ID)
        {

            cout << "(" << automoveis[i].idAuto << ") " << automoveis[i].marca << "," << automoveis[i].ano << "," << automoveis[i].num_chassi << "\n\n";
            Ncarros++;
        }
    }
    if (Ncarros)
    {
        cout << "Possuí " << Ncarros << " carro(s)\n\n";
        return 1;
    }
    else
    {
        cout << "ID NÃO ENCOTRADO!\n\n";
    }

    return 0;
}

int automovel_telefone(int tel) // mostrar automovel de acordo com o telemovel do cliente
{
    int Ncarros = 0, i = 0;
    for (i = 0; i < N_cliente; i++)
    {
        if (tel == clientes[i].tlm)
        {
            mostrar_automovel(clientes[i].idCliente);
            system("pause");
            return 1;
        }
    }
    return 0;
}

int matricula_ano_anterior(int ano)
{
    int Ncarros = 0;
    for (int i = 0; i < N_auto; i++)
    {
        if (automoveis[i].ano <= ano)
        {
            cout << "(" << automoveis[i].idAuto << ") " << automoveis[i].marca << ", " << automoveis[i].modelo << ", " << automoveis[i].ano << ", " << automoveis[i].num_chassi << "\n\n";

            Ncarros++;
        }
    }
    if (Ncarros)
    {
        cout << "Possuí " << Ncarros << " carro(s)\n\n";
        return 1;
    }
    else
    {
        cout << "NÃO POSSUÍ AUTOMOVEIS !\n\n";
    }

    return 0;
}

int matricula_ano_posterior(int anoP)

{
    int Ncarros = 0;
    for (int i = 0; i < N_auto; i++)
    {
        if (automoveis[i].ano >= anoP)
        {

            cout << "(" << automoveis[i].idAuto << ") " << automoveis[i].marca << ", " << automoveis[i].modelo << ", " << automoveis[i].ano << ", " << automoveis[i].num_chassi << "\n\n";
            Ncarros++;
        }
    }
    if (Ncarros)
    {
        cout << "Possuí " << Ncarros << " carro(s)\n\n";
        return 1;
    }
    else
    {
        cout << "NÃO POSSUÍ AUTOMOVEIS !\n\n";
    }

    return 0;
}

void mostrar_auto_chassi()
{
    string chassi;
    cout << "Insira o número de chassi: ";
    cin.ignore();
    getline(cin, chassi);
    cout << "\n";

    for (int i = 0; i < N_auto; i++)
    {
        if (chassi.compare(automoveis[i].num_chassi) == 0)
        {
            cout << "(" << automoveis[i].idAuto << ") " << automoveis[i].marca << ", " << automoveis[i].modelo << ", " << automoveis[i].ano << ", " << automoveis[i].num_chassi << "\n\n";
        }
    }
}

int menu_pesquisar() // menu pesquisar
{
    system("cls");
    int OpP;
    cout << "\n\n=========================MENU PESQUISAR==========================\n\n";
    cout << "1 - Mostre os automóveis do cliente com um determinado telemóvel\n\n";

    cout << "2 - Mostre os automóveis com matrícula igual ou anterior a um dado ano\n\n";

    cout << "3 - Mostre os automóveis com matrícula igual ou posterior a um dado ano\n\n";

    cout << "4 - Mostre o automóvel com um certo número de chassi\n\n";
    cout << "\n0 - Sair";
    cout << "\n\n==================================================================\n\n";
    cout << "Opção: ";
    cin >> OpP;
    return OpP;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    int opcao, opcao_cliente, opcao_pesquisar, opcao_automovel, resul, Idcliente, resulA, IDauto, tlm, ANO, ANOPOSTERIOR;
    string chassi;
    do
    {
        opcao = menu_principal(); // menu cliente
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

                    cout << "\n";
                    break;

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
            system("cls"); // menu automoveis
            do
            {

                opcao_automovel = menu_automoveis();
                switch (opcao_automovel)
                {
                case 1:
                    resulA = novo_automovel();
                    if (resulA)
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
                    system("cls");
                    mostrar_todos_automoveis();
                    break;

                case 3:

                    system("cls");
                    cout << "Insira o ID do cliente para pesquisar: ";
                    cin >> IDauto;
                    system("cls");
                    mostrar_automovel(IDauto);
                    system("pause");

                default:
                    break;
                }
            } while (opcao_automovel != 0);
            system("cls");

            break;
        case 3: // menu pesquisar
            do
            {
                opcao_pesquisar = menu_pesquisar();
                switch (opcao_pesquisar)
                {
                case 1:
                    system("cls");
                    cout << "Insira o telemóvel: ";
                    cin >> tlm;
                    cout << "\n";
                    automovel_telefone(tlm);
                    break;
                case 2:
                    system("cls");
                    cout << "Insira o ano: ";
                    cin >> ANO;
                    cout << "\n";
                    matricula_ano_anterior(ANO);
                    system("pause");
                    break;
                case 3:
                    system("cls");
                    cout << "Insira o ano: ";
                    cin >> ANOPOSTERIOR;
                    cout << "\n";
                    matricula_ano_posterior(ANOPOSTERIOR);
                    system("pause");
                    break;
                case 4:
                    system("cls");
                    mostrar_auto_chassi();
                    system("pause");

                default:
                    break;
                }
            } while (opcao_pesquisar != 0);

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
