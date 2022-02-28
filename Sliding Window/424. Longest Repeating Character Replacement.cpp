// https://leetcode.com/problems/longest-repeating-character-replacement/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int ws=0, maxsofar=0, maxlength = 0;
        map<int, int>mp;
        for(int we=0;we<s.size();we++)
        {
            mp[s[we]]++;
            maxsofar = max(maxsofar, mp[s[we]]);
            if(we-ws+1-maxsofar>k)
            {
                mp[s[ws]]--;
                ws++;
            }
            else
            {
                maxlength = max(maxlength, we-ws+1);
            }
        }
        return maxlength;
    }
};