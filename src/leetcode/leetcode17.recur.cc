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
        vector<string> vallist;
        if (digits.size() == 0)
        {
            return vallist;
        }
        string val = phoneMap[digits[0]];
        if (digits.size() == 1)
        {
            for (auto x : val)
            {
                vallist.push_back(string(1, x));
            }
            return vallist;
        }
        vector<string> result = letterCombinations(digits.substr(1, digits.size()));
        vector<string> ans;
        for (auto x : result)
        {
            for (auto x1 : val)
            {
                ans.push_back(x1 + x);
            }
        }
        return ans;
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