/*
 * Original problem: https://www.codewars.com/kata/55f2b110f61eb01779000053/train/cpp
 * Solved by: https://github.com/Duranzzz
 */


int get_sum(int a, int b){
    long int total = 0;
    for (int i = std::min(a,b); i <= std::max(a, b); i++) {
        total += i;
    }
    return total;
}
