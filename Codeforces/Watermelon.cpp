/*
 * Original problem: https://codeforces.com/problemset/problem/4/A
 * Solved by: https://github.com/Duranzzz
 */

#include<iostream>
using namespace std;

int main() {
    int w;  // Weight of the watermelon
    cin >> w;  // Read input weight

    /* Core logic:
     * - Even weight AND not 2
     * - Lógica principal:
     *   - Peso par Y diferente de 2
     */
    if (w % 2 == 0 && w != 2) {
        cout << "YES";  // Can be divided
    } else {
        cout << "NO";   // Cannot be divided
    }
    return 0;
}