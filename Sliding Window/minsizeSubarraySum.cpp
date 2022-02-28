// https://leetcode.com/problems/minimum-size-subarray-sum/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ws=0;
        int we, n = nums.size();
        int minlen = n, winsum=0, ma = 0, f=-1;
        for(we=0;we<n;we++)
        {
            winsum += nums[we];
            while(winsum>=target)
            {
                minlen = min(minlen, we-ws+1);
                winsum -= nums[ws];
                ws++;
                f = 0;
            }
        }
        if(f==-1)
            return 0;
        else
            return minlen;
    }
};