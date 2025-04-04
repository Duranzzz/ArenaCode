#include <iostream>
#include <string>
using namespace std;

int main () {
	string input;
	bool condicion = true;
	int cont = 0;
	int cont1 = 0;
	int cont2 = 0;
	int cont3 = 0;
	int cont4 = 0;
	while (condicion) {
		cin >> input;
		for (int i = 0; i < input.size(); i++){
			if (input.size() >= 8 && input.size() <= 14){
				if (input[i] >= 33 && input[i] <= 126){
					cont1++;	
				} else if (input[i] >= 'a' && input[i] <= 'z'){
					cont2++;
				} else if (input[i] >= '0' && input[i] <= '9'){
					cont3++;
				}else{
					cont4++;
				}
			} else {
				cout << "NO" << endl;
				break;
			}
		} else {
			cout << "NO" << endl;
			break;
		}
			
		if (cont1 > 1){
			cont1 = 1;
		} else if (cont2 > 1){
			cont2 = 1;
		} else if (cont3 > 1){
			cont3 = 1;
		} else if (cont4 > 1){
			cont4 = 1;
		} 			
	}		
}
	return 0;
}