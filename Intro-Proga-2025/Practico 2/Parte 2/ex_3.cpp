#include <iostream>
using namespace std;

//Exercise 3

int main (){
    //Declarando variables y pidiendo datos
    int A, B;
    cin >> A >> B;
    
    //Calculando la division y sus casos
    if (B==0){
        cout << "Impossible" << endl;
    } else {
        cout << A/B << endl;
    }
    return 0;
}