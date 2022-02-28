// https://leetcode.com/problems/maximum-average-subarray-i/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ws=0, we=0, winsum=0, maxsum=INT_MIN;
        if(nums.size()==1)
            return (double)nums[0];
        for(we=0;we<nums.size();we++)
        {
            winsum += nums[we];
            if(we==k-1)
                maxsum = max(maxsum, winsum);
            if(we>k-1)
            {
                winsum -= nums[ws];
                maxsum = max(maxsum, winsum);
                ws++;
            }
        }
        return (double)maxsum/k;
    }
};