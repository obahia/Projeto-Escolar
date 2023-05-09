#include <iostream>
using namespace std;

int main(){

    int *v, n, i;
    cout << "\nQual o tamanho que deseja para o vetor: ";
    cin >> n;

    // aloca um vetor de n elementos
    v = new int[n];

   

    for (i = 0; i < n; i++) {

        cout << "\nDigite o valor do" << "["<<  i + 1 <<"]" << " elemento:"; 
        cin >> v[i];
    }

    cout << "\n/* exibir os n elementos do vetor */\n" << endl;
    
    for (i = 0; i < n; ++i)
    {
        cout << v[i] << "\t";
    }
        
  

    delete[] v;
    return 0;

    
    
}


