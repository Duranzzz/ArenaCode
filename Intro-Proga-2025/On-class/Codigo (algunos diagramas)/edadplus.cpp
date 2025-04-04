#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Ingrese su edad" << endl;
    cin >> edad;
    if (edad <= 18){
        cout << "Estas en el colegio" << endl;
    } else if (edad <  25){
        cout << "Estas en la universidad" << endl;
    } else if (edad < 55){
        cout << "Estas en el trabajo" << endl;
    } else 
    cout << "Estas jubilado" << endl;
    return 0;
}