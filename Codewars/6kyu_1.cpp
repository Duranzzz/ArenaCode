/*
 * Original problem: https://www.codewars.com/kata/554b4ac871d6813a03000035/train/cpp
 * Solved by: https://github.com/Duranzzz
 */

#include <string>

std::string alphabet_position(const std::string &text) {
    std::string myString = "";
    for (char i : text) {
        if ((i >= 'A' and i <= 'Z') or (i >= 'a' and i <= 'z')) {
            char a;
            if (i >= 'A' and i <= 'Z') {
                a = i + 32;
            } else {
                a = i;
            }
            int letter = a - 96;
            std::string myletter = std::to_string(letter);
            myString += " " + myletter;
        }
    }
    myString.erase(0, 1);
    return myString;
}
