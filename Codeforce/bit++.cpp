#include <iostream>
using namespace std;

int main() {
    int number; cin >> number;
    int result = 0;
    string input;
    cin.ignore();

    for (int i = 0; i < number; ++i) {
        cin >> input;
        if (input[1]=='+') result++;
        else result--;
    }
    cout<<result;
    return 0;
}
