// https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countGoodSubstrings(string s) {
        int ws=0, we=0, c=0;
        // bool b = false;
        map<int, int>mp;
        for(we=0;we<s.size();we++)
        {
            mp[s[we]]++;
            if(we-ws==2)
            {
                if(mp.size()==3)
                {
                    c++;
                    mp[s[ws]]--;
                    if(mp[s[ws]]==0)
                        mp.erase(s[ws]);
                    ws++;
                }
                else
                {
                    mp[s[ws]]--;
                    if(mp[s[ws]]==0)
                        mp.erase(s[ws]);
                    ws++;
                }
            }
        }
        return c;
    }
};