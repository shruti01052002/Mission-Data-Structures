#include<bits/stdc++.h>
using namespace std;
vector<int> slidingMaximum(const vector<int> &A, int B) {
    map<int, int>mp;
    vector<int>v;
    int ws=0, we=0;
    for(we=0;we<A.size();we++)
    {
        mp[A[we]]++;
        if(we-ws+1>B)
        {
            mp[A[ws]]--;
            if(mp[A[ws]]==0)
            mp.erase(A[ws]);
            ws++;
        }
        if(we-ws+1==B)
        {
            auto i=mp.rbegin();
            v.push_back(i->first);
        }
    }
    return v;
}
