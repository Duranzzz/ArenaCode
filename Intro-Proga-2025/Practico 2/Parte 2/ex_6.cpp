#include <iostream>
using namespace std;

//Exercise 6

int main() {
    //Declarando variables y pidiendo datos
    int dia;
    cin >> dia;
    
    //Comparando y mostrando el resultado
    switch (dia){
        case 1:
            cout << "Lunes";
            break;
        case 2:
            cout << "Martes";
            break;
        case 3:
            cout << "Miercoles";
            break;
        case 4:
            cout << "Jueves";
            break;
        case 5:
            cout << "Viernes";
            break;
        case 6:
            cout << "Sabado";
            break;
        case 7:
            cout << "Domingo";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    return 0;
}