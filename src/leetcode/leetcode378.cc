#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        int n = matrix.size();
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix;
    matrix.push_back(vector<int>({10, 12, 14}));
    matrix.push_back(vector<int>({11, 13, 15}));
    matrix.push_back(vector<int>({12, 19, 25}));
    cout << s.kthSmallest(matrix, 14);
}