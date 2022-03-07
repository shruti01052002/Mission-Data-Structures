// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int we=0, ws=0, c=0, ze=0, on=0, ma=0;
        for(we=0;we<nums.size();we++)
        {
            if(nums[we]==0) ze++;
            else if(nums[we]==1) 
            {
                on++;
                if(ze<=1)
                ma = max(ma, we-ws);
            }
            if(ze<=1) continue;
            else
            {
                ma = max(ma, we-ws-1);
                if(nums[ws]==0)
                    ze--;
                else
                    on--;
                ws++;
            }
        }
        return ma;
    }
};