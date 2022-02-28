// https://leetcode.com/problems/contains-duplicate-ii/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int ws=0, we=0;
        bool b = false;
        map<int, int>mp;
        for(we=0;we<nums.size();we++)
        {
            mp[nums[we]]++;
            while(mp[nums[we]]>1 and ws<we)
            {
                if(nums[ws]==nums[we] and abs(ws-we)<=k)
                {
                    b = true;
                    mp[nums[we]]--;
                    break;
                }
                ws++;
            }
            if(b)
                break;
        }
        return b;
    }
};