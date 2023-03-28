#include <iostream>
#include <string>
#include <locale>
using namespace std;
string texto = "era uma vez   um gato maltês  tocava piano e falava francês  ";

int conta_palavras(string s)
{
    int pospalavra = -1, nsubs = 0;
    do
    {
        pospalavra = s.find("  ", pospalavra + 1);

        if (pospalavra != -1)
        {
            s = s.replace(pospalavra, 2, " ");
            nsubs++;
        }
       

    } while (pospalavra != -1); 
    cout << "Quantidade de palavras: " << nsubs << endl; 
    return nsubs;
}

void troca_duplo_espaco(string s)
{
    int poscaracter = -1, nsubs = 0;
    do
    {
        poscaracter = s.find("  ", poscaracter + 1);

        if (poscaracter != -1)
        {
            s = s.replace(poscaracter, 2, ".\n");
        }

    } while (poscaracter != -1);
    cout << s << endl;
}

void primeiras_maiusculas(string s)
{
    s[0] = toupper(s[0]);
    int poscaracter = -1;
    do
    {
        poscaracter = s.find(" ", poscaracter + 1);
        if (poscaracter != -1)
        {
            s = s.replace(poscaracter + 1, 1, 1, toupper(s[poscaracter + 1]));
        }

    } while (poscaracter != -1);
    cout << s << "\n\n";
}

int substitui(string s, char c1, char c2)
{
    int poscaracter = -1, nsubs = 0;
    do
    {
        poscaracter = s.find(c1, poscaracter + 1);

        if (poscaracter != -1)
        {
            s = s.replace(poscaracter, 1, 1, c2);

            nsubs++;
        }

    } while (poscaracter != -1);
    cout << s << endl;
    return nsubs;
}

int conta_chars(string s, char c)
{
    int poscaracter = -1, contarcaracter = 0;
    do
    {
        poscaracter = s.find(c, poscaracter + 1);
        if (poscaracter != -1)
        {
            contarcaracter++;
        }

    } while (poscaracter != -1);
    cout << "Quantidade de caracteres: " << contarcaracter << endl;
    return contarcaracter;
}

void mostra_palavras(string s)
{
    cout << "\n";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            cout << "\n";
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
}

void menuprincipal()
{
    int opcao, Vezessubs;
    char L1, L2, Cespecifico;

    do
    {
        cout << texto << "\n\n";
        puts("1 - Mostrar cada palavra em uma nova linha\n");
        puts("2 - Contar caractere específico\n");
        puts("3 - Substituir caractere\n");
        puts("4 - Primeiras letras em maiusculas\n");
        puts("5 - Trocar os duplos espaços\n");
        puts("6 - Contar palavras\n");
        cout << "\nInsira sua opcao: ";
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            mostra_palavras(texto);
            system("pause");
            system("cls");

            break;

        case 2:
            cout << "Insira o caractere que deseja contar: " << endl;
            cin >> Cespecifico;
            conta_chars(texto, Cespecifico);
            system("pause");
            system("cls");

            break;
        case 3:

            cout << "Insira uma letra que vai ser substituida: " << endl;
            cin >> L1;
            cout << "Insira a letra substituta: " << endl;
            cin >> L2;
            Vezessubs = substitui(texto, L1, L2);
            cout << "Vezes substituídas: " << Vezessubs << endl;
            system("pause");
            system("cls");

            break;

        case 4:
            primeiras_maiusculas(texto);
            system("pause");
            system("cls");

            break;

        case 5:
            troca_duplo_espaco(texto);
            system("pause");
            system("cls");

            break;
        case 6:
        conta_palavras(texto);
        system ("pause");
        system ("cls");

            break;
        }

    } while (opcao != 0);
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    menuprincipal();
}