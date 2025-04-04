#include <iostream>
#include <string>
using namespace std;
int main (){
    string password, contra;
    cout << "cree una contraseña" << endl;
    cin >> contra;
    cout << "Ingrese su contraseña" << endl;
    cin >> password;
    if (password == contra){
        cout << "Log in correcto" <<  endl;
    } else 
        cout << "Contraseña incorrecta" << endl;
    return 0;
}
