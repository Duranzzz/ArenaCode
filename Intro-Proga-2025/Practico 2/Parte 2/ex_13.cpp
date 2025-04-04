#include <iostream>
using namespace std;

//Exercise 13

int main() {
    //Declarando variables y pidiendo datos
    int xpyears, age;
    cin >> age >> xpyears;
    
    //Comparando y mostrando el resultado
    if (age >= 18 && xpyears >= 5 ){ //Condicion para director senior
        cout << "director senior" << endl;
    } else if ((age >= 18) && (xpyears >= 3 && xpyears < 5 )){ //Condicion para director de proyecto    
        cout << "director de proyecto" << endl;
    } else if ((age >= 18) && (xpyears >= 0 && xpyears < 3 )){ //Condicion para coordinador de proyecto 
        cout << "coordinador de proyecto" << endl;
    } 
    return 0;
}