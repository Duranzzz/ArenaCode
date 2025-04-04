#include <iostream>
using namespace std;

//Exercise 16

int main() {
        //Declarando variables y pidiendo datos
        int horai, horaf;
        cin >> horai >> horaf;
        
        //Comparando y mostrando el resultado
        if(horai < 0 || horai > 24 || horaf < 0 || horaf > 24){ //Cuando las horas no estan en el rango
            cout << "Las horas deben estar entre 0 y 24!" << endl;
        } else if(horai == horaf){ //Cuando las horas son iguales
            cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        } else if (horaf < horai){ //Cuando el inicio es mayor al final
                cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
        } else { //Cuando las horas estan en el rango   
            int horas1 = 0, horas2 = 0;
            if (horai >= 0 && horaf <= 24){ //Cuando las horas estan en el rango
            // Entre 0 y 7   
            if(horai >= 0 && horaf <= 7){ 
            horas1 = horaf - horai;
            }
            //Entre 7 y 17
            if(horai >= 7 && horaf <= 17){  
            horas2 = horaf - horai;
            }
            //Entre 17 y 24
            if(horai >= 17 && horaf <= 24){ 
            horas1 = horaf - horai;
            }
            //Entre 0 y 17
            if ((horai >= 0 && horai <= 7) && (horaf >= 7 && horaf <= 17)){
            horas1 = 7 - horai;
            horas2 = horaf - 7;
            }
            //Entre 7 y 24
            if ((horai >= 7 && horai <= 17) && (horaf >= 17 && horaf <= 24)){
            horas1 = horaf - 17;
            horas2 = 17 - horai;
            }
            //Entre 0 y 24 (combina los dos anteriores)
            if ((horai >= 0 && horai <= 7) && (horaf >= 17 && horaf <= 24)){
            horas1 = (7 - horai) + (horaf - 17); 
            horas2 = 10;
            }

            // Definiendo el formato de salida

            cout << "Has alquilado una bicicleta por" << endl;

            //No se muestra si es 0
            if (horas1 == 0){
            } else {
            cout << horas1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
            }

            //No se muestra si es 0
            if (horas2 == 0){
            } else {
            cout << horas2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
            }

            //Calculando el total a pagar
            int total = (horas1) + (horas2 * 2);
            
            //Ultima Salida
            cout << "El monto total a pagar es de " << total << " bolivaino(s).";
            }
        }
    return 0;
}