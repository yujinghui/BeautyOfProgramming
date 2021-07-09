#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int size = cost.size();
        int result[size];
        result[0] = cost[0];
        result[1] = cost[1];
        for (int i = 2; i < size; i++)
        {
            result[i] = min(result[i - 1] + cost[i], result[i - 2] + cost[i]);
        }
        return min(result[size - 1], result[size - 2]);
    }
};

int main()
{
    vector<int> cost({10, 15, 20});
    Solution s;
    cout << s.minCostClimbingStairs(cost) << endl;
}