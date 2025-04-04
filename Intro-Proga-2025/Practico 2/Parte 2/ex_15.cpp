#include <iostream>
using namespace std;

//Exercise 15

int main() {
        //Declarando variables y pidiendo datos
        int a , b, c;
        cin >> a >> b >> c;
        
        //Permutando los valores
        cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
        cout << "Permutamos: a => b, b => c, c => a" << endl;
        cout << "Los valores despues de la permutacion son: a = " << b << " b = " << c << " c = " << a << endl;
        
    return 0;
}