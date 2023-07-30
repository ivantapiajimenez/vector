#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    string nombre[10];

    for (int i=0 ;i < size(nombre);i++) {

        cout << "digite los nombres de la fila "<<endl;
        cin >> nombre[i];   
    }
    for (int i = 0;i < size(nombre);i++) {
        cout << nombre[i];
        if (i==4 && nombre[i] == "carlos") {
        
            cout << "Eres el ladron" << nombre[i];
        
        }
    }
  
    return 0;
}