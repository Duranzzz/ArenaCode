/*
 * Original problem: https://codeforces.com/problemset/problem/339/A
 * Solved by: https://github.com/Duranzzz
 */

#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string Input; std::cin >> Input;
    std::string Numbers;
    std::string Ordered;

    for (char i : Input) {
        if (i >= '0' and i <= '9') {
            Numbers += i;
        }
    }

    std::sort(Numbers.begin(), Numbers.end());

    for (int i = 0; i < Numbers.size(); i++) {
        if (i == Numbers.size() - 1) {
            Ordered += Numbers[i];
            break;
        }
        Ordered += Numbers[i];
        Ordered += '+';
    }
    std::cout << Ordered;
    return 0;
}
