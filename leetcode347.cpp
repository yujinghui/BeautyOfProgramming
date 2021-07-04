#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> v;

        for (auto a : v)
        {
            cout << a << k << endl;
        }
        return v;
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    s->topKFrequent(v, 3);
}