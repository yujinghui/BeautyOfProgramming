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
       
    }
};

int main()
{
    Solution s;
    vector<int> nums({1,2,3,1});
    cout << s.rob(nums);
}