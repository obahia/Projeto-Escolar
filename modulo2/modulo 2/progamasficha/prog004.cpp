#include <iostream> //Joao Bahia//
#include <cmath>
#include <locale>
using namespace std;

int conv;
float temp1, temp2;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    cout << "Insira sua temperatura:\n\t°\r";
    cin >>  temp1;

    cout << "Celsius para Fahrenheit digite 1\n";

    cout << "Fahrenheit para Celsius digite 2\n";

    cout << "Celsius para Kelvin digite 3\n";

    cout << "Kelvin para Celsius digite 4\n";

    cout << "Fahrenheit para Kelvin digite 5\n";

    cout << "Kelvin para Fahrenheit digite 6\n";
    cin >> conv;

    switch (conv)  
    {
    case  1:
        temp2 = temp1 * 1.8 + 32 ;
        cout << "Celsius em  Fahrenheit é :" << temp2 << endl;
        break;
    case 2:
        temp2 = (temp1 - 32) / 1.8 ;
        cout << "Fahrenheit em Celsius é :" << temp2 << endl;
        break;
    case 3:
        temp2 = temp1 + 273.15 ;
        cout << "Celsius em Kelvin é :" << temp2  << endl;
        break;
    case 4:
        temp2 = temp1 - 273.15;
        cout << "Kelvin em Celsius é :" << temp2  << endl;
        break;
    case 5:
        temp2 = (temp1 +  459.67) / 1.8;
        cout << "Fahrenheit em Kelvin é :" << temp2  << endl;
        break;
    case 6:
        temp2 = temp1 * 1.8 - 459.67;
        cout << "Kelvin para Fahrenheit é :" << temp2 << endl;

        break;
    }

    return 0;
}
