#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un numero para saber si es impar o par" <<  endl;
    cin >> n;
    if (n%2 == 0){
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
        }
    return 0;
}