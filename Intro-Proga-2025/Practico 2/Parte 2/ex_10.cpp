#include <iostream>
#include <string>
using namespace std;

//Exercise 10

int main(){
    //Declarando variablesy pidiendo datos
    int n1, n2;
    cin >> n1 >> n2;

    //Calculando la suma, la cantidad de digitos y la multiplicacion
    if (n1 < 0 || n2 < 0){ //Cuando los numeros son negativos
        cout << 0 << endl;
    } else {              //Cuando los numeros son positivos
        int s = n1 + n2; //Calculando la suma
        string S = to_string(s); //Convirtiendo la suma a string
        int length = S.size(); //Calculando la cantidad de digitos
        int mult = s * length; //Calculando la multiplicacion

        //Definiendo el formato de salida
        cout << "La suma de los enteros es: " << n1  << " + " << n2 << " = "
        << s << ". Los numeros de digitos de la suma " << s << " es igual a: " << length
        << ". Entonces, la multiplicacion " << s << " * " << length << " = " << mult << endl;
    }

    return 0;
}