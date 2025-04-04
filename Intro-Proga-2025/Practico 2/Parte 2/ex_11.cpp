#include <iostream>
#include <string>
using namespace std;

//Exercise 11

int main() {
    //Declarando variables y pidiendo datos
    int n;
    const int fibo = 11235813; //Numero de Fibonacci
    cin >> n;
    
    //Comparando y mostrando el resultado
    if (n != fibo){
        cout << "Esto no es de Fibonacci" << endl;
    } else 
        cout << "Se encontro Fibonacci" << endl;
    return 0;
}