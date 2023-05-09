#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a =2.53;
    float *ptr_a = NULL;

    ptr_a = &a;
    cout << ptr_a << endl;

    *ptr_a = a*a;
    cout << *ptr_a << endl;
    return 0;
}
