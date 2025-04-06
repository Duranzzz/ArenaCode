#include <iostream>
using namespace std;

int main() {
    // Declaring variables and requesting them
    long long int n, m, a; cin >> n >> m >> a;

    // Size square and tile in area
    long long int SizeSquare = n * m;

    // Defining controlling and auxiliary variables and counters
    long long int cont1 = 1; long long int cont2 = 1;
    long long int TotalArea = 0; long long int TotalLose = 0;
    int aux1; int aux2;

    // Loop to be executed, if the area of the square is exceeded.
    while (TotalArea < SizeSquare){
        // Calculating how many times vertically a tile goes in.
        aux1 = a;
        while (a < m) {
            a += aux1;
            cont1++;
        }
        a = aux1;
        // Calculating how many times horizontally a tile goes in.
        aux2 = a;
        while (a < n) {
            a += aux2;
            cont2++;
        }
        a = aux2;
        // Calculating obtained total area and number of tiles
        TotalLose = cont1 * cont2;
        TotalArea = cont1 * cont2 * a * a;
    }
    // Print number of tiles needed
    cout << TotalLose;
    return 0;
}