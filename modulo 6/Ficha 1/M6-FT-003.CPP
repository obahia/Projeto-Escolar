//João Bahia N08;


#include <iostream>
using namespace std;

#define DIM 6

void media(int *v, int d, float *M)
{
    for (int i = 0; i < d; i++)
    {
        *M = *M + *(v + i);
    }

    *M = *M / d;
}

void somatorio(int *v, int d, int *s)
{
    for (int i = 0; i < d; i++)
    {
        *s = *s + *(v + i);
    }
}

int main(int argc, char const *argv[])
{
    int v[DIM] = {12, 8, 11, 9, 18, 12};
    int soma = 0;
    float m = 0;

    somatorio(v, DIM, &soma);

    media(v, DIM, &m);

    cout << "A soma:  " << soma << endl;
    cout << "A media: " << m << endl;

    return 0;
}