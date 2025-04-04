#include <iostream>
using namespace std;

//Exercise 5

int main (){
    //Declarando variables y pidiendo datos
    char c;
    cin >> c;

    //Comparando y mostrando el resultado
    if (c>= 'A' && c<= 'Z'){              //Cuando es mayuscula
       cout << "upper-case alphabet" << endl;
    } else if (c>='a' && c<='z') {        //Cuando es minuscula
       cout << "lower-case alphabet" << endl;
    } else {                              //Cuando no es una letra
       cout << "not an alphabet" << endl;
    }
    return 0;
}