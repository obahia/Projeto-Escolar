//Joao Bahia
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char let;

   
    do
    {
        
        cout << "(X) para sair"<< endl;
        cout << "Insira uma letra:";
    cin >> let;
    
       
          cout << let << "-->" << int(let) << endl;
       

    } while (let != 'X');
    
    return 0;
}
