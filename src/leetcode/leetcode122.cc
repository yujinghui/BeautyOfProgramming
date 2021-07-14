#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int price_size = prices.size();
        int result[price_size];
        result[0] = 0;
        for (int i = 0; i < price_size; i++)
        {
            
        }
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> inputnums = vector<int>({7, 1, 5, 3, 6, 4});
    cout << s->maxProfit(inputnums);
}