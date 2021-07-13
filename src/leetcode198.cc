#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int result[nums.size()];
        result[0] = nums[0];
        if(nums.size() == 1){
            return result[0];
        }
        result[1] = nums[1];
        if(nums.size() == 2){
            return max(result[0], result[1]);
        }
        result[2] = max(nums[2]+nums[0],nums[1]);
        for(int i = 3; i < nums.size();i ++){
            result[i] = max(nums[i] + result[i -2],
            max(nums[i],nums[i] + result[i -3]));
        }
        int maxVal = 0;
        for(auto x : result) {
            maxVal = max(maxVal, x);
        }
        return maxVal;
    }
};

int main()
{
    Solution s;
    vector<int> nums({1,2,3,1});
    cout << s.rob(nums);
}