/*
 * Original problem: https://codeforces.com/problemset/problem/281/A
 * Solved by: https://github.com/Duranzzz
 */

#include <iostream>
#include <string>

int main() {
    std::string Input; std::cin >> Input;
    if (not (Input[0] >= 'A' and Input[0] <= 'Z')){
        Input[0] = Input[0] - 32;
    }
    std::cout << Input;
    return 0;
}
