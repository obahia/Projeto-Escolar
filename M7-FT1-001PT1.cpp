#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Clientes
{
    string nome;
    int idade;
    string nacio;
};


int main()
{
    Clientes inform;
    fstream arquivo;
    char opc = 's';
    string linha;


    arquivo.open("pessoas.txt", ios::out);
    system("cls");
    cout << "Deseja inserir um Cliente?[s/n]: ";
    cin >> opc;
    system("cls");


    while ((opc == 's') || (opc == 'S'))
    {
        cin.ignore();
        cout << "Insira um nome: ";
        getline(cin, inform.nome);
        arquivo  << inform.nome << endl;
        cout << "Insira a idade: ";
        cin >> inform.idade;
        arquivo  << inform.idade << endl;
        cin.ignore();
        cout << "Insira a nacionalidade: ";
        getline(cin, inform.nacio);
        arquivo<< inform.nacio << "\n";


        cout << "\n\nInserir novo cliente?[s/n]";
        cin >> opc;
        system("cls");
    }


    arquivo.close();


    arquivo.open("pessoas.txt", ios::in);


    if (arquivo.is_open())
    {
        while (getline(arquivo, linha))
        {
            cout << "Nome: "<<  linha << endl;


            getline(arquivo, linha);
            cout << "Idade: " << linha << endl;


            getline(arquivo, linha);
            cout << "Nacionalidade: " << linha << endl << "\n";
        }
    }
    else
    {
        cout << "NAO FOI POSSIVEL ABRIR ARQUIVO\n";
    }


    return 0;
}
