#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <sstream>

using namespace std;

struct CONTACTO
{
   string nome;
   int tlm;
   string aniv;
};

int menu_principal()
{

   int OpP;
   cout << "\n\n=========================TRATAMENTO DE FICHEIROS==========================\n\n";
   cout << "1 - Mostrar (ler) conteĆŗdo do ficheiro\n\n";

   cout << "2 - Acrescentar uma pessoa ao ficheiro\n\n";

   cout << "3 - Limpar conteĆŗdo do ficheiro e acrescentar uma pessoa\n\n";

   cout << "\n0 - Sair";
   cout << "\n\n==========================================================================\n\n";
   cout << "Opção: ";
   cin >> OpP;
   return OpP;
}

void ler_ficheiro()
{
   ifstream arquivo;
   string linha;
   arquivo.open("contactos.psi.txt");

   if (arquivo.is_open())
   {
      cout << "NOME || TELEMÓVEL || ANIVERSÁRIO\n\n";

      while (getline(arquivo, linha))
      {
         stringstream fluxo(linha);
         string nome, tlm, aniv;

         fluxo >> nome >> tlm >> aniv;

         cout << nome << '  ' << tlm << '  ' << aniv << "\n";
      }

      arquivo.close();
   }
   else
   {
      cout << "NÃO FOI POSSOSÍEL ABRIR O ARQUIVO\n";
   }
}

void acrescentar_uma_pessoa()
{
   ofstream arquivo;
   CONTACTO inform;

   cout << "\t\tACRESCENTAR UMA PESSOA\t\t\n";

   arquivo.open("contactos.psi.txt", ios::app);

   cout << "\n\nInsira um nome: ";
   cin >> inform.nome;

   cout << "\nInsira o telemóvel: ";
   cin >> inform.tlm;

   cout << "\nInsira o aniversário: ";
   cin >> inform.aniv;
   cout << "\n";

   arquivo << inform.nome << " || " << inform.tlm << " || " << inform.aniv << endl;

   arquivo.close();
}

void apagar_e_acrescentar_uma_pessoa()
{
   ofstream arquivo;
   char c;

   cout << "Deseja apagar todo o conteúdo do ficheiro e acrescentar uma pessoa?[s/n]: ";
   cin >> c;

   if (c == 's' || c == 'S')
   {
      system("cls");
      arquivo.open("contactos.psi.txt", ios::trunc);
      cout << "\t\tCONTEĆDO APAGADO\t\n\n";
      system("pause");
      system("cls");
      acrescentar_uma_pessoa();
   }
   else
   {
      system ("cls");
      cout << "\t\tNAO FOI POSSIVEL APAGAR O CONTEĆDO DO FICHEIRO\t\n\n";

   }
}

int main()
{
   setlocale(LC_ALL, "pt_PT.utf8");

   int opcao;

   do
   {
      opcao = menu_principal();

      switch (opcao)
      {
      case 1:

         system("cls");
         ler_ficheiro();
         system("pause");
         system("cls");

         break;
      case 2:

         system("cls");
         acrescentar_uma_pessoa();
         system("pause");
         system("cls");

         break;
      case 3:

         system("cls");
         apagar_e_acrescentar_uma_pessoa();
         system("pause");
         system("cls");

      default:

         break;
      }

   } while (opcao != 0);


   return 0;
}