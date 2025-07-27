/*
* Original problem: https://codeforces.com/problemset/problem/112/A
 * Solved by: https://github.com/Duranzzz
 */

#include <iostream>
#include <string>

int main() {
    std::string input1, input2; std::cin >> input1 >> input2;
    for (char &c : input1) {
        if (c >= 'A' and c <= 'Z') {
            c += 32;
        }
    }
    for (char &c : input2) {
        if (c >= 'A' and c <= 'Z') {
            c += 32;
        }
    }
    if (input1 == input2) {
        std::cout << 0;
        return 0;
    }
    if (input1 > input2) {
        std::cout << 1;
        return 0;
    }
    std::cout << -1;
    return 0;
}
