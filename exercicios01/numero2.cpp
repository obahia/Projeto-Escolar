#define _USE_MATH_DEFINES

#include <iostream>

using namespace std;

float raio, perimetro, area;

      int main()

{
    cout << "Digite o raio:\n    cm\r";
    cin >> raio;
    system ("cls");
    perimetro = 2 * M_PI * raio;
    area = M_PI * raio * raio;
    cout << "O perimetro:" << perimetro << endl;
    cout << "A area:" << area << endl;
    return 0;
}
