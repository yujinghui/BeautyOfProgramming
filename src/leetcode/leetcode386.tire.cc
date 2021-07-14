#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> lexicalOrder(int n)
    {
        vector<int> result;
        return result;
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> result = s->lexicalOrder(15);
    cout << result.size() << endl;
    for (auto x : result)
    {
        cout << x;
    }
}