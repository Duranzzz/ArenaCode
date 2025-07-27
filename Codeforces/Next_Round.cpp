/*
 * Original problem: https://codeforces.com/problemset/problem/158/A
 * Solved by: https://github.com/Duranzzz
 */

#include <iostream>
using namespace std;

int main () {
    int ContestantNumber, FinalContestant, score;
    cin >> ContestantNumber >> FinalContestant;
    // Variable to count how many pass and to save the note of the decider
    int cont = 0, aux = 0;

    // Loop that runs ContestantNumber times
    for (int i = 1; i <= ContestantNumber; i++) {
        cin >> score;
        // It is passed to the next grade if
        // the grade entered is from the participant who decides the grade or after, and
        // it is lower than the last grade saved in aux (which is the same of the participant who decides)
        // or the grade is simply zero.
        if ((cont >= FinalContestant and score < aux) or (score == 0)) {
            continue;
        }
        // If the data entered is not yet from the last participant,
        // it is saved and taken as someone who will advance
        aux = score;
        cont++;
    }
    cout << cont;
    return 0;
}
