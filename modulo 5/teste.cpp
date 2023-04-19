#include <iostream>
#include <string>
using namespace std;

struct Dados

{
    string nome;
    int idade = 0;
    string morada;

} p1;

int main(int argc, char const *argv[])
{

    cout << "Insira seu nome: " << endl;
    getline(cin, p1.nome);
    cout << "Insira sua morada: " << endl;
    getline(cin, p1.morada);
    cout << "Insira sua idade: " << endl;
    cin >> p1.idade;
    system("cls");
    cout << "Seu nome: " << p1.nome << "\n\n";
    cout << "Sua idade: " << p1.idade << "\n\n";
    cout << "Sua morada: " << p1.morada << "\n\n";

    return 0;
}
