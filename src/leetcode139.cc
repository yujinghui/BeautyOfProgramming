#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    // todo 不太理解
    bool wordBreak(string s, vector<string> &wordDict)
    {
        unordered_set<string> wordDictSet(wordDict.begin(), wordDict.end());
        int size = s.size();
        bool result[size + 1];
        for (int i = 0; i <= size; i++)
        {
            result[i] = false;
        }
        result[0] = true;
        for (int i = 1; i <= size; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (result[j] && wordDictSet.count(s.substr(j, i)))
                {
                    result[i] = true;
                    break;
                }
            }
        }
        return result[size];
    }
};

int main()
{
    Solution s;
    vector<string> wordDict({"leet", "code"});
    string ss = "leetleet";
    cout << s.wordBreak(ss, wordDict);
}