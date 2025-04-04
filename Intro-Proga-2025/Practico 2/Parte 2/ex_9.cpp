#include <iostream>
#include <string>
using namespace std;

//Exercise 9

int main() {
    //Declarando variables y pidiendo datos
    string str1, str2, str3, str4, str5;
    cin >> str1 >> str2 >> str3 >> str4 >> str5;
     
    //Comparando y mostrando el resultado
    if (str1[0] == str5[0]){
        cout << str1[0] << str2[0] << str3[0] << str4[0] << str5[0] << endl;
        cout << "Hemos encontrado algo!" << endl;
    } else {
        cout << str1[0] << str2[0] << str3[0] << str4[0] << str5[0] << endl;
        cout << "Aun sin suerte" << endl;
    }
    return 0;
}