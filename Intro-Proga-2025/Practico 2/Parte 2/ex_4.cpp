#include <iostream>
using namespace std;

//Exercise 4

int main (){
    //Declarando variables y pidiendo datos
   float N, A, B, X, Y;
   cin >> N >> A >> B >> X >> Y;
   float tot = N; //Guardando el total

   //Calculando el descuento y el total a pagar
   if (N > B){ 
       float desc1 = N*(Y/100); //Calculando el descuento
       float tot = N - desc1; //Calculando el total
       cout << tot << endl;
   } else if (N > A){
       float desc2 = N*(X/100); //Calculando el descuento
       float tot = N - desc2; //Calculando el total
       cout << tot << endl;
   } else {
       cout << tot << endl; //Imprimiendo el total
   }
    return 0;
}