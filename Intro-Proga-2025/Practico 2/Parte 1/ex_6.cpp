#include <iostream>
#include <string>
using namespace std;

//Excercise 6

int main(){
    //Definiendo variables y pidiendo datos
    string nombre;
    string apellido;
    cin >> nombre >> apellido;
    
    //Cambieando el orden de los datos con "+"
    string salida = apellido + ", " + nombre;
    cout << salida;
   return 0; 
}