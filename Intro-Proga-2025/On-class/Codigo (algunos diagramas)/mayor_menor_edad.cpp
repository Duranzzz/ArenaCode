#include <iostream>
using namespace std;

int main (){
    int edad;
    cout << "Ingrese su edad" << endl;
    cin >> edad;
    if (edad >= 18){
        cout << "Usted es mayor de edad" << endl;
    } else {
        cout << "Tienes permiso de ingresar" << endl;
    }
    return 0;
}