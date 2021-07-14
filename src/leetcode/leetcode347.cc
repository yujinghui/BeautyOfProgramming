#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        for(int i = nums.size()/2 - 1;i > 0; i--) {
            
        }
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    s->topKFrequent(v, 2);
}