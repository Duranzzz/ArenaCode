/*
 * Original problem: https://www.codewars.com/kata/578aa45ee9fd15ff4600090d/train/cpp
 * Solved by: https://github.com/Duranzzz
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

namespace mynamespace {
    void show_vector(const auto &vec) {
        for (const auto &elemento: vec) {
            std::cout << elemento << " ";
        }
        std::cout << "\n";
    }
}

class Kata{
public:
    std::vector<int> sortArray(std::vector<int> array){
        int j = 0;
        std::vector<int> odds = {};

        for (int i : array) if (i % 2 != 0) odds.push_back(i);

        std::sort(odds.begin(), odds.end());

        for (int& i : array) if (i % 2 != 0) {i = odds[j]; j++;}
        return array;
    }
};
