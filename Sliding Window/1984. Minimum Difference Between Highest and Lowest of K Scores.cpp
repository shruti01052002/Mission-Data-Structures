// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int mi = INT_MAX;
        int ws = 0, we = k-1;
        if(nums.size()==1) return 0;
        while(we<nums.size())
        {
            mi = min(mi, abs(nums[ws]-nums[we]));
            ws++;
            we++;
        }
        return mi;
    }
};