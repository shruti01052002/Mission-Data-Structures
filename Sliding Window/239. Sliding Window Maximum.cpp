// https://leetcode.com/problems/sliding-window-maximum/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>s;
        vector<int>v;
        int ws=0;
        for(int we=0;we<nums.size();we++)
        {
            s.insert(nums[we]);
            if(we-ws+1==k)
            {
                auto it = s. end();
                it--;
                
                v.push_back(*it);
                s.erase(s.find(nums[ws]));

                ws++;
            }
        }
        return v;
    }
};