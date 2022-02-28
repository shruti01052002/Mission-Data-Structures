// https://leetcode.com/problems/longest-substring-without-repeating-characters/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int i, j, n=s.size(), ma;
        i=0;
        j=0;
        ma = 0;
        while(i<n and j<n)
        {
            if (st.find(s[j]) == st.end())
            {
                ma = max(ma, j-i+1);
                st.insert(s[j]);
                j++;
            }
            else
            {
                if(st.find(s[i]) != st.end())
                st.erase(s[i]);
                i++;
            }
        }
        return ma;
    }
};
