#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    int maxScoreSightseeingPair(vector<int> &values)
    {
        int pastMaxVal = values[0], ans = 0;
        for (int i = 1; i < values.size(); i++)
        {
            ans = max(ans, pastMaxVal + values[i] - i);
            pastMaxVal = max(pastMaxVal, values[i] + i);
        }
        return ans;
    }
    // 超时
    int maxScoreSightseeingPair1(vector<int> &values)
    {
        int size = values.size();
        int result[size];
        for (int i = 0; i < size; i++)
        {
            result[i] = 0;
        }
        for (int i = 1; i < size; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int val = values[i] + values[j] + j - i;
                result[i] = max(val, result[i]);
            }
        }
        int maxVal = 0;
        for (int i = 1; i < size; i++)
        {
            maxVal = max(maxVal, result[i]);
        }
        return maxVal;
    }
};

int main()
{
    Solution s;
    vector<int> nums({8, 1, 5, 2, 6});
    cout << s.maxScoreSightseeingPair(nums);
}