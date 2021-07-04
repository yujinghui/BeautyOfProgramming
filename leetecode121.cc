#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0, minVal = 10001;
        for (int i = 0; i < prices.size(); i++)
        {
            int currentVal = prices[i];
            if (currentVal < minVal)
            {
                minVal = currentVal;
            }
            else if (prices[i] - minVal > maxProfit)
            {
                maxProfit = prices[i] - minVal;
            }
        }
        return maxProfit;
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> intputint({7, 1, 5, 3, 6, 4});
    cout << s->maxProfit(intputint) << endl;
}