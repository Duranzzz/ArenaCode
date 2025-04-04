#include <iostream>
using namespace std;

//Exercise 7

int main() {
    //Declarando variables y pidiendo datos
    float r;
    float n = 3.14159265; //Valor de pi
    cin >> r;
    
    //Calculando el area y sus casos
    if (r>=0){
        float area = 4*n*r*r;
        printf("%f", area);
    } else {
        cout << "Error: radius cannot be negative."<< endl;
    }
    return 0;
} 