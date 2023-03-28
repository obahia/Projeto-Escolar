#include <iostream>
#include <locale>
using namespace std;

const int N_LINHAS = 5;
const int N_COLUNAS = 3;

int m[N_LINHAS][N_COLUNAS] = {{12, 15, 9}, {10, 11, 15}, {13, 16, 11}, {8, 18, 10}, {17, 14, 12}};

void leia_m1()
{
    int lin, col;

    cout << "\nInsira a linha desejada (0 a 4):";
    cin >> lin;
    cout << "Insira a coluna desejada (0 a 2):";
    cin >> col;
    cout << m[lin][col] << endl;
}

void substituir_m2()
{
    int lin, col, numnovo;
    cout << "\nInsira a linha desejada (0 a 4): ";
    cin >> lin;
    cout << "Insira a coluna desejada (0 a 2): ";
    cin >> col;
    cout << "Insira o valor substituto: ";
    cin >> numnovo;
    m[lin][col] = numnovo;
}

void limpe_m3()
{
    cout << "TABELA ZERADA\n";
    for (int i = 0; i < N_LINHAS; i++)
    {
        for (int j = 0; j < N_COLUNAS; j++)
        {
            m[i][j] = 0;
            cout << " " << m[i][j];
        }

        cout << endl;
    }
}

void mostre_m4()
{
    system("cls");
    cout << "CONTEUDO DA MATRIZ\n\n";
    for (int i = 0; i < N_LINHAS; i++)
    {
        for (int j = 0; j < N_COLUNAS; j++)
        {
            cout << "m[" << i << "][" << j << "] = " << m[i][j] << "\t";
        }
        cout << endl;
    }
}

bool se_na_matriz5()
{
    int nota;
    system("cls");
    cout << "Insira um valor: " << endl;
    cin >> nota;
    for (int i = 0; i < N_LINHAS; i++)
    {
        for (int j = 0; j < N_COLUNAS; j++)
        {
            if (nota == m[i][j])
            {
                return true;
            }
        }
    }
    return false;
}

int maximo_valor6()
{
    int maiornum = 0, i, j;

    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
        {
            if (m[i][j] > maiornum)
            {
                maiornum = m[i][j];
            }
        }
    }
    return maiornum;
}

void minimo_indice7()
{
    int menornum = m[0][0], lin, col;

    for (int i = 0; i < N_LINHAS; i++)
    {
        for (int j = 0; j < N_COLUNAS; j++)
        {
            if (m[i][j] < menornum)
            {
                menornum = m[i][j];
                lin = i;
                col = j;
            }
        }
    }
    cout << endl;
    cout << "m[" << lin << "][" << col << "] = " << menornum << endl;
}

void media_m8()
{
    int linha, coluna, numelementos = 0;
    float media, soma = 0;

    for (linha = 0; linha < N_LINHAS; linha++)
    {
        for (coluna = 0; coluna < N_COLUNAS; coluna++)
        {
            soma = soma + m[linha][coluna];
            numelementos++;
        }
    }
    media = soma / (N_COLUNAS * N_LINHAS);

    cout << "A média é: " << media << endl;
}

void menuprincipal()
{
    int opcao, valormax;
    do
    {
        puts("1 - Ler elemento da matriz\n");
        puts("2 - Substituir elemento na matriz\n");
        puts("3 - Limpar matriz\n");
        puts("4 - Mostrar os elementos da matriz\n");
        puts("5 - Pesquisar valor\n");
        puts("6 - Procurar máximo\n");
        puts("7 - Mostrar os índices do menor valor\n");
        puts("8 - Calcular média\n");
        puts("0 - Sair\n");
        cout << "\nInsira sua opção: ";
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            leia_m1();
            system("pause");
            system("cls");

            break;

        case 2:
            substituir_m2();
            system("pause");
            system("cls");
            break;
        case 3:
            limpe_m3();
            system("pause");
            system("cls");

            break;

        case 4:
            mostre_m4();
            system("pause");
            system("cls");

            break;

        case 5:

            if (se_na_matriz5())
            {
                cout << "Seu valor está na matriz\n"
                     << endl;
            }
            else
            {
                cout << "Seu valor não está na matriz" << endl;
            }
            system("pause");
            system("cls");
            break;
        case 6:
            valormax = maximo_valor6();

            cout << "O maior número é: " << valormax << endl;
            system("pause");
            system("cls");

            break;
        case 7:
            minimo_indice7();
            system("pause");
            system("cls");

            break;
        case 8:
            media_m8();
            system("pause");
            system("cls");

            break;
        case 0:
            system("cls");
            break;
        }

    } while (opcao != 0);
}


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    menuprincipal();

    return 0;
}
