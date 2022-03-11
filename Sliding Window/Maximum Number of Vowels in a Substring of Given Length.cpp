#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxVowels(string s, int k) {
        int ws=0, we=0, vc=0, ma=0;
        for(we=0;we<s.size();we++)
        {
            if(s[we]=='a' or s[we]=='e' or s[we]=='i' or s[we]=='o' or s[we]=='u')
                vc++;
            if(we-ws+1==k)
            {
                ma = max(ma,vc);
                if(s[ws]=='a' or s[ws]=='e' or s[ws]=='i' or s[ws]=='o' or s[ws]=='u')
                    vc--;
                ws++;
            }
        }
        return ma;
    }
};