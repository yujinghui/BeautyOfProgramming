
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 0;
        vector<int> ans;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            int result = i == digits.size() - 1 ? digits[i] + 1 + carry : digits[i] + carry;
            carry = result / 10 > 0 ? 1 : 0;
            ans.push_back(result % 10);
        }
        if(carry > 0){
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{

    Solution s;
    vector<int> digits = vector<int>({1,2,4});
    vector<int> ans = s.plusOne(digits);
    for (auto x : ans)
    {
        cout << x << " ";
    }
}