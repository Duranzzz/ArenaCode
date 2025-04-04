#include <iostream>
#include <cmath>
using namespace std;

//Exercise 2

int main () {
    //Declarando variables y pidiendo datos
    float a, b, c;
    cin >> a >> b >> c;

    //Calculando el discriminante
    float disc = (b * b) - (4 * a * c);

    //Calculando las raices
    if (a == 0 ) {
        float r = -(c/b); //Calculando cuando a = 0
        cout << r << endl;   
    } else if (disc < 0) { //Cuando disc < 0
    } else if (disc == 0){
        float x = (-b)/(2*a); //Calculando cuando disc = 0
        cout << x << endl;
    }else {
        float x1 = (-b + sqrt(disc)) / (2 * a); 
        float x2 = (-b - sqrt(disc)) / (2 * a);
        cout << x1 << " " << x2 << endl;
    } 
    
    return 0;
}