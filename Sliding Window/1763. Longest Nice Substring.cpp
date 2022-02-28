// https://leetcode.com/problems/longest-nice-substring/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size()<2) return "";
        unordered_set<char>unset;
        for(int i=0;i<s.size();i++)
        {
            unset.insert(s[i]);
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(unset.count(tolower(s[i]))==true and unset.count(toupper(s[i]))==true) continue;
            
            string prev = longestNiceSubstring(s.substr(0, i));
            string next = longestNiceSubstring(s.substr(i+1));
            
            if(prev.size()>=next.size()) return prev;
            else return next;
        }
        return s;
    }
};