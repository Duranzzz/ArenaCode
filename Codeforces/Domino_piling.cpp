/*
 * Original problem: https://codeforces.com/problemset/problem/50/A
 * Solved by: https://github.com/Duranzzz
 */

#include <iostream>
using namespace std;

int main() {
    int M, N; cin >> M >> N;

    // Calculating the amount of unit squares
    int amount_squares = M * N;

    // Calculating the number of 2x1 pices needed
    int amount_dominoes = amount_squares / 2;

    cout << amount_dominoes;
    return 0;
}
