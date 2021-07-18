#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        int i = nums1.size();
        int j = nums2.size();
        int size = i + j;
        int idx = 0, jdx = 0;
        while (idx < i && jdx < j)
        {
            if (nums1[idx] <= nums2[jdx])
            {
                result.push_back(nums1[idx]);
                idx++;
            }
            else
            {
                result.push_back(nums2[jdx]);
                jdx++;
            }
        }
        while (idx < i)
        {
            result.push_back(nums1[idx]);
            idx++;
        }
        while (jdx < j)
        {
            result.push_back(nums2[jdx]);
            jdx++;
        }
        if (size & 1)
        {
            return result[size >> 1];
        }
        else
        {
            return ((double)(result[size >> 1] + result[(size >> 1) - 1])) / 2;
        }
    }
};

int main()
{
    Solution s;
    vector<int> n1({3});
    vector<int> n2({1});
    cout << s.findMedianSortedArrays(n1, n2);
}