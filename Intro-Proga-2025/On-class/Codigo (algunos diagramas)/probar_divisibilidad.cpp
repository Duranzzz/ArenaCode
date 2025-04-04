#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ingrese un numero " << endl;
    cin >> n;
    if (((n%2 == 0)&&(n%3==0)&&(n%5==0))){
        cout << "tu numero es divisible entre 2, 3 y 5" << endl;
        } else if((n%3==0)&&(n%5==0)){
        cout << "tu numero es divisible entre 3 y 5" << endl;
        } else if ((n%2==0)&&(n%3==0)){
        cout << "tn numero es divisible entre 2 y 3" << endl; 
        } else if ((n%2==0)&&(n%5==0)){
        cout << "tn numero es divisible entre 2 y 5" << endl; 
        } else if (n%3==0) {
	    cout << "tu numero es divisible entre 3" << endl;
		} else if (n%5==0) {
		cout << "Tu  numero es divisible entre 5" << endl;
		} else if (n%2==0) {
		cout << "Tu numero es divisible entre 2" << endl;
	    } else {
	    cout << "No divisible ni por 2, ni por 3, ni por 5" << endl;
    }
    return 0;
}