#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float maiornum=0,soma= 0;
    int i,j ;
    float valor[6] = {2.34, 5.40, 1.00, 7.62, 8.82, 3.91};

    for (i = 0; i < 6; i++)
    {

        cout << valor[i] << " " << endl;
        soma = valor[i] + soma;
    }

    for ( j = 0; j < 6; j++)
    {
       if (valor[j] > maiornum )
       {
          maiornum = valor[j];
       }
       
    }
    
    
    
        cout << endl;

    cout << "Somatoria: " << soma << endl;
    cout << "Maior numero: " << maiornum << endl;

    return 0;
}
