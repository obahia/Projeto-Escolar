//Joao Bahia//

#include <iostream>
using namespace std;

int ND=0;
float op;   
int main(int argc, char const *argv[])
{
   cout << "Insira um numero:";
    cin >> op; 
  do
  {
    op = op/2;
    ND++;
  } while (op>1);
  cout << "Numero de vezes da divisao:" << ND <<endl;
   cout << "Resultado:" << op << endl;
  
}
