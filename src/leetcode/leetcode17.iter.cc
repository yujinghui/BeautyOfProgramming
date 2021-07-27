#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
#include <stack>

using namespace std;

/**
 * 同编程之美第三章的题.
 */
class Solution
{
private:
    unordered_map<char, string> phoneMap{
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}};

public:
    vector<string> letterCombinations(string digits)
    {
        }
};

int main()
{
    Solution s;
    vector<string> result = s.letterCombinations("23");
    for (auto x : result)
    {
        cout << x << endl;
    }
}