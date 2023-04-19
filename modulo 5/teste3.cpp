#include <iostream>
#include <string>
#include <locale>

using namespace std;

struct dma
{
    int dia;
    int mes;
    int ano;
};

int main(int argc, char const *argv[])
{
    int diaD = 0, anoD = 0, mesD = 0, diferenca;
    dma data1{17, 07, 2023};
    dma data2{17, 07, 2005};
    if (data1.ano - data2.ano >= 0)
    {
        anoD = data1.ano - data2.ano;
        anoD *= 365;
    }
    if (data1.mes - data2.mes >= 0)
    {                  
        mesD = data1.mes - data2.mes;
        mesD *= 30;
    }
    if (data1.dia - data2.dia >= 0)
    {
        diaD = data1.dia - data2.dia;
    }

    diferenca = anoD + mesD + diaD;

    cout << "Diferenca em dias: " << diferenca << endl;

    return 0;
}
