
#include <iostream>
#include <string>
using namespace std;

int N_filmes = 6;
int N_categoria = 6;

struct Filme
{
    int cod_filme;
    string titulo;
    int cod_categoria;
};

struct Categoria
{
    int cod_categoria;
    string descricao;
};

Filme f[100] = {{12, "Titulo 1", 92}, {6, "Titulo 2", 93}, {21, "Titulo 3", 92}, {13, "Titulo 4", 91}, {19, "Titulo 5", 94}, {3, "Titulo 6", 94}};

Categoria c[10] = {{91, "Romance"}, {92, "Ficcao"}, {93, "Documentario"}, {94, "Policial"}, {95, "Terror"}, {96, "Infantil"}};

void mostrar_todos()
{
    system("cls");
    cout << "mostrar_todos";
    cout << "\n\n";
    for (int i = 0; i < N_filmes; i++)
    {
        cout << "{" << f[i].cod_filme << "}"
             << " " << f[i].titulo << " " << f[i].cod_categoria << "\n\n";
    }
    system("pause");
}

void mostrar_filmes_por_cod(int Fil)
{
    system("cls");
    cout << "mostrar_filmes_por_cod\n\n";

    for (int i = 0; i < N_filmes; i++)
    {
        if (f[i].cod_filme == Fil)
        {

            cout << "{" << Fil << "}"
                 << " " << f[i].titulo << ", " << f[i].cod_categoria << "\n\n";
        }
    }
    system("pause");
}

void mostrar_por_categoria(int Cat)
{

    system("cls");
    cout << "mostrar_por_categoria\n\n";

    for (int i = 0; i < N_categoria; i++)
    {
        if (c[i].cod_categoria == Cat)
        {

            cout << "{" << Cat << "}"
                 << " " << c[i].descricao << "\n\n";
        }
    }
    system("pause");
}

void mostrar_total()
{
    system("cls");
    cout << "mostrar_total\n\n";

    for (int i = 0; i < N_filmes; i++)
    {
        cout << "{" << f[i].cod_filme << "} " << f[i].titulo;

        for (int j = 0; j < N_categoria; j++)
        {
            if (f[i].cod_categoria == c[j].cod_categoria)
            {
                cout << " {" << c[j].cod_categoria << "}" << "  " << c[j].descricao << "\n\n";
            }
        }
    } 
} 

int main()
{
    int f = 13, c = 93;

    /*1*/ mostrar_todos(); // limpa o ecra, mostra todos os filmes, faz "pausa"

    /*2*/ mostrar_filmes_por_cod(f); // limpa ecra, mostra o filme com o
                                     // codigo f e faz "pausa"

    /*3*/ mostrar_por_categoria(c); // limpa ecra, mostra os filmes da
                                    //  categoria c e faz "pausa"

    /*4*/ mostrar_total(); // limpa ecra e mostra toda a informacao dos filmes
                           //  incluindo a descricao da categoria de cada um
                           

    return 0;
}