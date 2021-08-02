#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <stdio.h>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_map<char, int> row[9], column[9], sub[9];
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                if (board[i][j] != '.' &&
                    (row[i][board[i][j]]++ ||
                     column[j][board[i][j]]++ ||
                     sub[i / 3 * 3 + j / 3][board[i][j]]++))
                    return false;
        return true;
    }
};