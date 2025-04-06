#include <iostream>
include <
using namespace std;

int main() {
    // Declarating variables and requesting them
    int M, N; cin >> M >> N;

    // Calculating the amount of unit squares
    int amount_squares = M * N;

    // Calculating the number of 2x1 pices needed
    int amount_dominoes = amount_squares / 2;

    // Printing the solution
    cout << amount_dominoes;
    return 0;
}
