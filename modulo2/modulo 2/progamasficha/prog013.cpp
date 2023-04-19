//Joao Bahia
#include <iostream>
#include <cmath>
using namespace std;

int num, i;

int main()
{
    cout << "Insira um numero:";
    cin >> num;
    for ( i = num; i %10 !=0; i++)
    {
        if (i %3 !=0 )
        {
            cout << i << " " << endl;
        }
        
    }
    
    return 0;
}
