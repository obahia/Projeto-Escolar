#include <iostream>
#include <string>
#include <locale>
using namespace std;

struct Alunos

{
    string nome;
    float nota1;
    float nota2;
    float nota3;

} aluno1 = {"João", 17, 16, 18};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    cout << "Nome do aluno: "     << aluno1.nome << endl;
    cout << "Nota do 1º Modulo: " << aluno1.nota1 << endl;
    cout << "Nota do 2º Modulo: " << aluno1.nota2 << endl;
    cout << "Nota do 3º Modulo: " << aluno1.nota3 << "\n\n";

    return 0;
}
