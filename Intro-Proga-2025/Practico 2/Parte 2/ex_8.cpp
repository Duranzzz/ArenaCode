#include <iostream>
using namespace std;

//Exercise 8

int main() {
    //Declarando variables y pidiendo datos
    int segundos;
    cin >> segundos;

    //Calculando las horas, minutos y segundos
    if (segundos < 0) { //Cuando los segundos son negativos
        cout << "Error: Input seconds cannot be negative." << endl;
    } else { //Cuando los segundos son positivos
        int horas = segundos / 3600;      //Arroja la parte entera de la division  
        int minutos = (segundos % 3600) / 60; //Arroja el residuo de la division entero
        int segs = segundos % 60; 
        
        //Definiendo el formato de salida
        if (horas < 10) {
            cout << "0";
            cout << horas << ":";
        } else {
            cout << horas << ":";
        }
        if (minutos < 10) {
            cout << "0";
            cout << minutos << ":";
        } else {
            cout << minutos << ":";
        }
        if (segs < 10){
            cout << "0";
            cout << segs << endl;
        } else {
            cout << segs;
        }
    }

    return 0;
}