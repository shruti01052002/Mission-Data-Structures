//https://leetcode.com/problems/max-consecutive-ones-iii/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero = 0, one = 0;
        int ws=0, we=0, ma=0;
        for(we=0;we<nums.size();we++)
        {
            if(nums[we]==0)
                zero++;
            else
                one++;
            // ma = max({ma, zero, one});
            if(we-ws+1-one>k)
            {
                if(nums[ws]==0) zero--;
                else one--;
                ws++;
            }
            else
            {
                ma = max(ma, we-ws+1);
            }
        }
        return ma;
    }
};