/*
 * Original problem: https://codeforces.com/problemset/problem/231/A
 * Solved by: https://github.com/Duranzzz
 */

#include <iostream>
using namespace std;

int main() {
    // Declaring Variables
    int numero;
    cin >> numero;
    int cont_solutions = 0;
    int cont_secures = 0;
    string solvers;
    cin.ignore();

    for (int i = 1; i <= numero; i++) {
        getline(cin, solvers);
        // Check each index
        for (int j = 0; j < solvers.size(); j++) {
            // If a '1' is founded increase the conter
            if (solvers[j] == '1') {
                cont_solutions++;
            }
        }

        // fi there are more than two '1's increase this conter
        if (cont_solutions >= 2) {
            cont_secures++;
        }
        // Return the initial value to solutions conter
        cont_solutions = 0;
    }

    cout << cont_secures;
    return 0;
}
