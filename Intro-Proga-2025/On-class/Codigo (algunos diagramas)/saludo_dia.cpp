#include <iostream>
using namespace std;
int main() {
    int hora;
    cout << "Ingrese la hora" << endl;
    cin >> hora;
    if ((hora >= 6) && (hora <= 10)){
        cout << "Buenos dias" << endl;
    }
    if ((hora >= 11) && (hora <= 17)){
        cout << "Buenas tardes" << endl;
    }
    if (hora >= 18 && hora <= 22){
        cout << "Buenos noches" << endl;
    }
    if ((hora >= 1) && (hora <= 5)){
        cout << "Buenas madrugadas" << endl;
    } else if ((hora >= 23) && (hora <=24)){
        cout << "Buenas madrugadas" << endl;
    }
     if (hora < 0){
        cout << "no se aceptan numeros negativos" << endl;
    } else if (hora > 24 ){
        cout << "Numero superior a 24, INVALIDO" << endl;
    }
    return 0;
}
