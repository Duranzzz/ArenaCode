#include <iostream>
#include <string>
using namespace std;

//Exercise 7

int main () {
    //Definiendo variables y pidiendo datos
    string n1, n2, n3;
    getline(cin, n1);
    getline(cin, n2);
    getline(cin, n3);
    
    //Imprimiendo en orden inverso
    cout << endl << n3 << endl;
    cout << n2 << endl;
    cout << n1 << endl;

    return 0;
}