#include <iostream>
using namespace std;

int main () {
    int n; cin >> n;
    string mierda;

    for (int i = 0; i < n; i++) {
        cin >> mierda;
        if (mierda.size() > 10) {
            cout << mierda[0] << mierda.size() - 2 << mierda[mierda.size()-1] << endl;
        } else {
            cout << mierda << endl;
        }
    }
    return 0;
}