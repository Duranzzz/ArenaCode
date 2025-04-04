#include <iostream>

using namespace std;

int main_ex() {
  int = capital, preciocom, cantidad;
  const int meses =  12;
  float cambio = 6.96;

  cout << "ingrese su capital en dolares" << endl;
  cin >> capital ;

  cout << "ingrese la cantidad de meses" << endl;
  cin >> meses ;

  float coutausd = capital / meses;
  cout << "la cuota mensual en dolares es" << coutausd << endl;

  float coutbs = (capital * cambio )/ meses;
  cout << "la cuota mensual en dolares es" << coutabs << endl;
  return 0;
}