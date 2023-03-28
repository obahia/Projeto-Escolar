// Jooa Bahia//   
#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int num, i;

int main(int argc, char const *argv[])
{
     cout << "Insira um numero: ";
     cin >> num;

     for ( i = 1; i <= num; i++)
     {
        cout <<  i << " " << num - i + 1 << "\n";

       
     }
     


    return 0;
}
