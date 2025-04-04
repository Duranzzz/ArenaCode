#include <iostream>
#include <string>
using namespace std;

//Exercise 1

int main () {
    //Declarando variables y pidiendo datos
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    //Comparando y guardando la cadena menor
    strmin = str1;
    if (str2 < strmin) strmin = str2;
    if (str3 < strmin) strmin = str3;
    
    //Imprimiendo la cadena menor
    cout << strmin << endl;
    return 0;
}