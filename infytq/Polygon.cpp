#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    vector<pair<int, int>>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    map<int, vector<pair<int, int>>>mp1;
    for(int i=0;i<n;i++)
    {
        mp1[v[i].first].push_back(v[i]);
        // cout<<v[i].first<<" ";
    }
    int si=0;
    for(auto x:mp1)
    {
        if((x.second).size()>=2) si+=2;
        else si+=1;
    }
    cout<<si;
    return 0;
}