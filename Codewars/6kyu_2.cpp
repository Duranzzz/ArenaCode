/*
 * Original problem: https://www.codewars.com/kata/576757b1df89ecf5bd00073b/train/cpp
 * Solved by: https://github.com/Duranzzz
 */

std::vector<std::string> towerBuilder(unsigned nFloors) {
    std::vector<std::string> tower;
    int width = 2 * nFloors - 1;

    for (int floor = 1; floor <= nFloors; floor++) {
        std::string level = "";
        int stars = 2 * floor - 1;
        int spaces = (width - stars) / 2;

        for (int i = 0; i < spaces; i++) level += ' ';
        for (int i = 0; i < stars; i++) level += '*';
        for (int i = 0; i < spaces; i++) level += ' ';
        tower.push_back(level);
    }
    return tower;
}

