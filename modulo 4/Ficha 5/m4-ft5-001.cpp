#include <iostream>
#include <string>
using namespace std;

void conteudo(string s)

{

   if (s.empty())
   {
     cout << "Sem conteudo! (0) caracteres" << endl;
   } else
   {
    cout << "Com conteudo! " <<"(" << s.length() << ")" << " caracteres" << endl;
   }
   
   


 
}

int main()

    {

        string cumprimento;

        cumprimento = "Olá!";

        conteudo(cumprimento); 

        cumprimento.clear();

        conteudo(cumprimento);

        cumprimento = "Bom dia!";
        conteudo(cumprimento);

    }
