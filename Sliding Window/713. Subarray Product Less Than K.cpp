//https://leetcode.com/problems/subarray-product-less-than-k/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ws=0, we=0, c=0, pro=1, n;
        for(we=0;we<nums.size();we++)
        {
            pro = pro*nums[we];
            while(pro>=k and ws<we)
            {
                pro = pro/nums[ws];
                ws++;
            }
            if(pro<k)
            {
                n = we-ws+1;
                c+=((n*(n+1))/2)-(((n-1)*n)/2);
            }
        }
        return c;
    }
};
