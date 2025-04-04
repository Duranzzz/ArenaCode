#include <iostream>
using namespace std;

int main(){
    int n1;
    int n2;
     cout << "Ingresen el primer numero" << endl;
     cin >> n1;
     cout << "Ingrese el segundo numero" << endl;
     cin >> n2;
     
     if (n1 > n2){
         cout << "El numero: " << n1 << " es mayor que el numero: " << n2 << endl;
     } else if (n1 == n2){
         cout << "Ambos numero coinciden" << endl; 
        } else {
        cout << "El numero: " << n2 << " es mayor que el numero: " << n1 <<  endl;
        }
    return 0;
}