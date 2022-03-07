// https://leetcode.com/problems/fruit-into-baskets/submissions/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ws=0, we=0, ma=0, s;
        map<int, int>mp;
        for(we=0;we<fruits.size();we++)
        {
            mp[fruits[we]]++;
            if(mp.size()>2 and ws<we)
            {
                mp[fruits[ws]]--;
                if(mp[fruits[ws]]==0)
                {
                    mp.erase(fruits[ws]);
                }
                ws++;
            }
            if(mp.size()<3)
            {
                s = 0;
                for(auto x:mp)
                {
                    s+=x.second;
                }
                cout<<s<<" ";
                ma = max(ma, s);
            }
        }
        cout<<endl;
        return ma;
    }
};