#include <iostream>
using namespace std;

//Exercise 14

int main() {
        //Declarando variables y pidiendo datos
        int n;
        cin >> n;
        
        //Comparando y mostrando el resultado en cada caso
        if (n < 0 ){
            cout << "Entrada invalida." << endl;
        } else if (n==0){
            cout << "No se encontraron documentos." << endl;
        } else if(n==1){
            cout << "Se encontro un documento." << endl;
        } else if (n > 1) {
            cout << n << " documentos encontrados." << endl;
        } 
        
    return 0;
}