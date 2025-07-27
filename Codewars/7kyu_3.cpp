/*
 * Original problem: https://www.codewars.com/kata/554e4a2f232cdd87d9000038/train/cpp
 * Solved by: https://github.com/Duranzzz
 */

std::string DNAStrand(const std::string& dna){
    std::string myDNA = dna;
    for (char& i : myDNA){
        if (i == 'A') {
            i = 'T';
            continue;
        }
        if (i == 'T') {
            i = 'A';
            continue;
        }
        if (i == 'G') {
            i = 'C';
            continue;
        }
        i = 'G';
    }
    return myDNA;
}
