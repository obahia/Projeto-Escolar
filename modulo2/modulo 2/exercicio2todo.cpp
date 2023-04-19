#include <iostream>
#include <locale>
using namespace std;

char letra;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    cout << "Insira sua Letra:";
    cin >> letra;
    letra = tolower (letra);
    switch (letra)
    {
    case 'a':
        cout << "É uma vogal" << endl;
        break;
    case 'e':
         cout << "É uma vogal" << endl;
         break; 
    case 'i':
         cout << "É uma vogal" << endl;
        break;
    case 'o':
        cout << "É uma vogal" << endl;
        break;
    case 'u':
        cout << "É uma vogal" << endl;
        break;
    
    default:
         cout << "É uma consoante" << endl;


    }
    return 0;
}
