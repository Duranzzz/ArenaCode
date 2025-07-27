/*
 * Original problem: https://www.codewars.com/kata/542c0f198e077084c0000c2e/train/cpp
 * Solved by: https://github.com/Duranzzz
 */

int divisors(long long n) {
    int counter = 0;
    for(int i = 1; i <= sqrt(n); i++){
        n % i == 0 ? (i == n/i ? counter++ : counter+=2) : 0;
    }
    return counter;
}