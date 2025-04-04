#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float A , B , C;
    cout << "introduce el valor para A" << endl;
    cin >> A;

    cout << "introduce el valor para B" << endl;
    cin >> B;

    cout << "introduce el valor para C" <<  endl;
    cin >> C;

    float det = (B*B) - (4*A*C);
    float x1 = (-B + sqrt(det) ) / (2*A);
    float x2 = (-B - sqrt(det) ) / (2*A);
    
    if (A == 0) {
        cout << "Tu ecuacion divide por cero, no se puede dividir por 0" << endl;
    } else {
        cout << "La primera raiz es; " << x1 << endl;
        cout << "La primera raiz es; " << x2 << endl;
    }
    
    return 0;
}