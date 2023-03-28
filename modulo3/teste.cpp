#include <iostream>
#include <windows.h>
using namespace std;

int b=0;

// int barra(int x )
// {
 
   
//      if (b <= 100)
//      {
//         b++ ;
//         cout << char(219);
//      }
//          return ;

    


int main()
{
    int count = 10;
    while (count >= 0) {
        std::cout << count << std::endl;
        count--;
        Sleep(1000);
    }
    std::cout << "Blast off!" << std::endl;
    return 0;
}

// do
// {
//     for (i = 1; i <= 101; i++)
//     {
//         cout << i - 1;
//         Sleep(1000);
//         system("cls");
//         for (int j = 0; j < i; j++)
//         {
//             cout << char(219);
//         }
//     }