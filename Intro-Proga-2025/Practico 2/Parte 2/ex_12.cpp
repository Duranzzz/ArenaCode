#include <iostream>
#include <string>
using namespace std;

//Exercise 12

int main() {
    //Declarando variables y pidiendo datos
    string color1, color2, color3, colort;
    int pisos1, pisos2, pisos3, pisost;
    cin >> color1 >> pisos1 >> color2 >> pisos2 >> color3 >> pisos3 >> colort >> pisost;
    
    //Comparando y mostrando el resultado caso 1
    if ((colort == color1 || colort == "?") && (pisost == pisos1 || pisost == -1)){
        cout << 1 << endl;
    }
    
    //Comparando y mostrando el resultado caso 2
    if ((colort == color2 || colort == "?") && (pisost == pisos2 || pisost == -1 )){
        cout << 2 << endl;
    }
    //Comparando y mostrando el resultado caso 3
    if ((colort == color3 || colort == "?") && (pisost == pisos3 || pisost == -1)){
        cout << 3 << endl;
    }
    return 0;
}