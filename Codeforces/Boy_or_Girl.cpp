/*
* Original problem: https://codeforces.com/problemset/problem/236/A
 * Solved by: https://github.com/Duranzzz
 */

#include <iostream>
#include <string>

int main() {
    std::string Input; std::cin >> Input;
    std::string Uniques = "";
    for (char i : Input) {
        if (Uniques.find(i) == std::string::npos) Uniques += i;
    }
    if (Uniques.size() % 2 == 0) std::cout << "CHAT WITH HER!";
    else std::cout << "IGNORE HIM!";
    return 0;
}
