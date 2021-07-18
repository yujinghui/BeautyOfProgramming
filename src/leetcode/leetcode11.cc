#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxScale = 0, i = 0, j = height.size() - 1;
        while (i < j)
        {
            int c = (j - i) * (min(height[i], height[j]));
            maxScale = max(c, maxScale);
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxScale;
    }
};

int main()
{
    Solution s;
    vector<int> i({1, 2, 1});
    cout << s.maxArea(i);
}