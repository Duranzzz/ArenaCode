/*
 * Original problem: https://codeforces.com/problemset/problem/282/A
 * Solved by: https://github.com/Duranzzz
 */

#include <iostream>
using namespace std;

int main() {
    int number;          // Total number of operations
    string input;        // Stores each operation (e.g., "X++", "--X", etc.)
    cin >> number;       // Read the number of operations
    int result = 0;      // Accumulator for final value

    // Process each operation:
    // - Read 'number' operations (each is a 3-character string)
    // - The key condition depends on the second character (index 1)
    for (int i = 0; i < number; ++i) {
        cin >> input;  // Read operation string

        // Valid operations always have '+' or '-' at position [1]:
        //   "X++" → [1] = '+'
        //   "++X" → [1] = '+'
        //   "--X" → [1] = '-'
        //   "X--" → [1] = '-'
        if (input[1] == '+') {
            result++;  // Increment (addition operation)
        } else {
            result--;  // Decrement (subtraction operation)
        }
    }

    cout << result;  // Output final accumulated result
    return 0;
}