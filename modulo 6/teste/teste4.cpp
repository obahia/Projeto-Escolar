#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float arr[3] = {2.5, -1.0, 7.3};
    float *ptr_arr;

    ptr_arr = arr;
    cout << *ptr_arr << endl; 

    ptr_arr++;
    cout << *ptr_arr++ << endl;
    cout << *ptr_arr << endl;
    return 0;
}
