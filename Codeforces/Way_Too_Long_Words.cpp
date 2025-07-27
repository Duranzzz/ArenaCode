/*
 * Original problem: https://codeforces.com/problemset/problem/71/A
 * Solved by: https://github.com/Duranzzz
 */

#include <iostream>
using namespace std;

int main() {
    int number;         // Total number of words to process
    cin >> number;      // Read the number of words

    string word;        // Stores each input word

    // Process each word
    for (int i = 0; i < number; i++) {
        cin >> word;    // Read current word

        // Check if word needs abbreviation (length > 10)
        if (word.size() > 10) {
            // Abbreviate format: first letter + (length-2) + last letter
            cout << word[0] << word.size() - 2 << word.back() << endl;
        } else {
            // Print short words as-is
            cout << word << endl;
        }
    }
    return 0;
}