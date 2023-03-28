// Azeite   // 500 L; 200 L; 100 L; 20 L; 5 L; 2 L; 1 L; 0,2 L e 0,1 L
#include <iostream>
#include <locale>
using namespace std;

int main(int argc, char const *argv[])
{
     setlocale(LC_ALL, "pt_PT.utf8");
    int R500 = 0, R200 = 0, R100 = 0, R20 = 0, R5 = 0, R2 = 0, R1 = 0, R02 = 0, R01 = 0;
    float litro;
    

    cout << "Insira a quantidade de litros de azeite: ";
    cin >> litro;
    system ("cls");
    cout << "Recipientes necessários para: " << litro << "L" << endl;
    litro *= 10;

    while (litro > 0)
    {
        if (litro >= 5000)
        {
            litro = litro - 5000;
            R500++;
        }
        else if (litro >= 2000)
        {
            litro = litro - 2000;
            R200++;
        }
        else if (litro >= 1000)
        {
            litro = litro - 1000;
            R100++;
        }
        else if (litro >= 200)
        {
            litro = litro - 200;
            R20++;
        }
        else if (litro >= 50)
        {
            litro = litro - 50;
            R5++;
        }
         else if (litro >= 20)
        {
            litro = litro - 20;
            R2++;
        }
        else if (litro >= 10)
        {
            litro = litro - 10;
            R1++;
        }
         else if (litro >= 2)
        {
            litro = litro - 2;
            R02++;
        }
        else if (litro >= 1)
        {
            litro = litro - 1;
            R01++;
        }
    }

    if (R500 > 0)
    {
        cout << R500 << "  "
             << "X de 500L"
             << "\n";
    }
    if (R200 > 0)
    {
        cout << R200 << "  "
             << "X de 200L"
             << "\n";
    }
    if (R100 > 0)
    {
        cout << R100 << "  "
             << "X de 100L"
             << "\n";
    }
    if (R20 > 0)
    {
        cout << R20 << "  "
             << "X de 20L"
             << "\n";
    }
    if (R5 > 0)
    {
        cout << R5 << "  "
             << "X de 5L"
             << "\n";
    }
    if (R2 > 0)
    {
        cout << R2 << "  "
             << "X de 2L"
             << "\n";
    }
    if (R1 > 0)
    {
        cout << R1 << "  "
             << "X de 1L"
             << "\n";
    }
    if (R02 > 0)
    {
        cout << R02 << "  "
             << "X de 0,2L"
             << "\n";
    }
    if (R01 > 0)
    {
        cout << R01 << "  "
             << "X de 0,1L"
             << "\n";
    }

    return 0;
}
