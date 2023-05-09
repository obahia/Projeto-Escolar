//João Bahia N08

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    int i;
    float f;
    bool b;
    double d;
    int *p;

    cout << "A memoria utilizada do char em bytes: " << sizeof(c) << "\n\n";
    cout << "A memoria utilizada do int em bytes: " << sizeof(i) << "\n\n";
    cout << "A memoria utilizada do float em bytes: " << sizeof(f) << "\n\n";
    cout << "A memoria utilizada do bool em bytes: " << sizeof(b) << "\n\n";
    cout << "A memoria utilizada do double em bytes: " << sizeof(d) << "\n\n";
    cout << "A memoria utilizada do ponteiro em bytes: " << sizeof(*p) << "\n\n";

    return 0;
}
