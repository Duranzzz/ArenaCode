/*
 * Original problem: https://codeforces.com/problemset/problem/263/A+
 * Solved by: https://github.com/Duranzzz
 */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Functions prototype
void input_vector(vector<int>& v); // Data reading
void find_one(vector<int>& loc, const vector<vector<int>>& v); // One search
void show_matrix(const vector<vector<int>>& v); // Debugging utility

int main() {
    // 5x5 matrix defined in the problem
    vector<vector<int>> beautiful_matrix(5,vector <int> (5));

    // Vector to store position of '1': [row, column]
    vector<int> location(2);

    // Read each row in the matrix
    for (vector<int> &i: beautiful_matrix) {
        input_vector(i);
    }

    // Localize number one position
    find_one(location, beautiful_matrix);

    // Debugging: (maintained but disabled)
    // show_matrix(beautiful_matrix);
    // cout << location[0] << location[1];

    // Calculate Manhattan distance to the center (2,2)
    // - We subtract 2 from each coordinate (base 0 indices)
    // - We add the absolute values
    cout << abs(location[0] - 2) + abs(location[1] - 2);
    return 0;
}

/// @brief Read integer values to fill a vector
/// @param v Vector to fill (passed by reference)
void input_vector(vector<int>& v) {
    for (int &cell : v) {
        cin >> cell;
    }
}

/// @brief Find the first occurrence of the value '1' in the array
/// @param loc Vector where the position [row, column] is stored
/// @param v Search array (const to avoid modification)
void find_one(vector<int> &loc, const vector<vector<int> > &v) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (v[i][j] == 1) {
                loc[0] = i;
                loc[1] = j;
                return;
            }
        }
    }
}

/// @brief Show the matrix (debugging tool)
/// @param v Matriz to print (const for security)
void show_matrix(const vector<vector<int>>& v) {
    for (const vector<int>& row : v) {
        for (const int& col : row) {
            cout << col << " ";
        }
        cout << '\n';
    }
}