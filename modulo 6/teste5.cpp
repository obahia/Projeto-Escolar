#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char str[] = "abcdef";
    char *psrt = str;

    for (int i = 5; i >= 0; i--)
    {
        cout << *(psrt+i);
    }
    cout << "\n";
    
    return 0;
}
