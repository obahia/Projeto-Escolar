//João Bahia N08

#include <iostream>
using namespace std;
#define DIM 6

void somatorio(int *v, int d, int *s)
{
    for (int i = 0; i < d; i++)
    {
        *s = *s + *(v + i) ;
    }
}

int main(int argc, char const *argv[])
{
    int v[DIM] = {12, 8, 11, 9, 18, 12};
    int soma = 0;

   

    somatorio(v, DIM, &soma);

     cout << "A soma:  " << soma << endl;

    return 0;
}
