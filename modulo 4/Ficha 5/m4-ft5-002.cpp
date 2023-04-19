#include <iostream>
#include <string>
#include <locale>
using namespace std;
string texto;

int conta_palavras6(string s)
{
    int pos = -1, contador = 0;

    // contar espacos

    // se o primeiro caractere nao for espaco, e uma palavra
    if (s[0] != ' ')
        contador++;

    do
    {
        pos = s.find(" ", pos + 1);
        // so contabiliza a palavra se nao for um espaco
        if (pos != -1 && (pos + 1 < s.length() && s[pos + 1] != ' '))
            contador++;
    } while (pos != -1);

    cout << "Quantidade de palavras: " << contador << endl;

    return contador;
}

void troca_duplo_espaco5(string s)
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

void primeiras_maiusculas4(string s)
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

int substitui3(string s, char c1, char c2)
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

int conta_chars2(string s, char c)
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

void mostra_palavras1(string s)
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
        puts("\n(1) - Mostrar cada palavra em uma nova linha\n");
        puts("\n(2) - Contar caractere específico\n");
        puts("\n(3) - Substituir caractere\n");
        puts("\n(4) - Primeiras letras em maiusculas\n");
        puts("\n(5) - Trocar os duplos espaços\n");
        puts("\n(6) - Contar palavras\n");
        puts("\n(0) - Para sair\n");
        cout << "\nInsira sua opção: ";
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            mostra_palavras1(texto);
            system("pause");
            system("cls");

            break;

        case 2:
            cout << "Insira o caractere que deseja contar: " << endl;
            cin >> Cespecifico;
            conta_chars2(texto, Cespecifico);
            system("pause");
            system("cls");

            break;
        case 3:

            cout << "Insira uma letra que vai ser substituida: " << endl;
            cin >> L1;
            cout << "Insira a letra substituta: " << endl;
            cin >> L2;
            Vezessubs = substitui3(texto, L1, L2);
            cout << "Vezes substituídas: " << Vezessubs << endl;
            system("pause");
            system("cls");

            break;

        case 4:
            primeiras_maiusculas4(texto);
            system("pause");
            system("cls");

            break;

        case 5:
            troca_duplo_espaco5(texto);
            system("pause");
            system("cls");

            break;
        case 6:
            conta_palavras6(texto);

            system("pause");
            system("cls");

            break;
        }

    } while (opcao != 0);
}

int main()
{
    cout << "Insira a frase que deseja: ";
    getline(cin, texto);
    system("cls");
    setlocale(LC_ALL, "pt_PT.utf8");
    menuprincipal();
}