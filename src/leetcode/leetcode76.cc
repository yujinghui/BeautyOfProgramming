#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;
/**
 * 给你一个字符串 s 、一个字符串 t 。返回 s 中涵盖 t 所有字符的最小子串。如果 s 中不存在涵盖 t 所有字符的子串，则返回空字符串 "" 。
注意：
对于 t 中重复字符，我们寻找的子字符串中该字符数量必须不少于 t 中该字符数量。
如果 s 中存在这样的子串，我们保证它是唯一的答案

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-window-substring
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
class Solution
{
public:
    string minWindow(string s, string t)
    {
        unordered_set<char> existSet;
        int tsize = t.size();
        int start = 0, end = 0;
        int l = 0, r = 0;
        while (true)
        {
        }
        return s.substr(start, end - start);
    }
};

int main()
{
    Solution s;
    cout << s.minWindow("ADOBECODEBANC", "ABC") << endl;
}