#include <iostream>
using namespace std;

int main () {
    // Definir variables
    int ContestantNumber; cin >> ContestantNumber;
    int FinalContestan; cin >>FinalContestan;
    int cont = 0;
    int aux = 0;
    int score;

    // Bucle que calcula la operacion
    for (int i = 1; i <= ContestantNumber; i++) {
        cin >> score;
        // Si se llega al ultimo participante y ademas sus datos son menores al ultimo o el dato ingresado es nulo, simplemente se sigue preguntando
        if ((cont >= FinalContestan and score < aux) or (score == 0)) {
            continue;
        // Si el dato ingresado aun no es del ultimo participante se lo guarda y se lo toma como alguien que avanzara
        } else {
            aux = score;
            cont++;
        }
    }
    cout << cont;
    return 0;
}
