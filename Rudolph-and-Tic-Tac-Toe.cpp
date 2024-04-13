#include <iostream>
#include <vector>

using namespace std;

bool checkWin(vector<vector<char>>& field, char symbol) {
    // Check rows
    for (int row = 0; row < 3; ++row) {
        if (field[row][0] == field[row][1] && field[row][1] == field[row][2] && field[row][0] == symbol) {
            return true;
        }
    }

    // Check columns
    for (int col = 0; col < 3; ++col) {
        if (field[0][col] == field[1][col] && field[1][col] == field[2][col] && field[0][col] == symbol) {
            return true;
        }
    }

    // Check diagonals
    if (field[0][0] == field[1][1] && field[1][1] == field[2][2] && field[0][0] == symbol) {
        return true;
    }
    if (field[0][2] == field[1][1] && field[1][1] == field[2][0] && field[0][2] == symbol) {
        return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    for (int testcase = 0; testcase < t; ++testcase) {
        vector<vector<char>> field(3, vector<char>(3));

        for (int i = 0; i < 3; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < 3; ++j) {
                field[i][j] = row[j];
            }
        }

        // Check if crosses won
        if (checkWin(field, 'X')) {
            cout << "X" << endl;
            continue;
        }

        // Check if noughts won
        if (checkWin(field, 'O')) {
            cout << "O" << endl;
            continue;
        }

        // Check if pluses won
        if (checkWin(field, '+')) {
            cout << "+" << endl;
            continue;
        }

        // If no winner, it's a draw
        cout << "DRAW" << endl;
    }

    return 0;
}

