/*
* Original problem: https://www.codewars.com/kata/554b4ac871d6813a03000035/train/cpp
 * Solved by: https://github.com/Duranzzz
 */

#include <string>
#include <vector>

std::string highAndLow(const std::string& numbers) {
    std::string num = "";
    std::vector<std::string> vString = {};
    std::vector<int> vInt = {};
    // Program's main logic: indicate numbers inside the string
    for (int i = 0; i < numbers.size(); i++) {
        if (i == numbers.size()-1) {
            num += numbers[i];
            vString.push_back(num);
        } else if (numbers[i] == ' '){
            vString.push_back(num);
            num.clear();
        } else {
            num += numbers[i];
        }
    }
    // Saving into a string vector
    for (std::string data : vString) {
        vInt.push_back(std::stoi(data));
    }
    // Looking for the max and the min
    int max = vInt[0], min = vInt[0];
    for (int i : vInt) {
        if (i > max) {
            max = i;
        }
        if (i < min) {
            min = i;
        }
    }
    return std::to_string(max) + " " + std::to_string(min);
}

