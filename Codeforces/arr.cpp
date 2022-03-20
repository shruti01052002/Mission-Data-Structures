#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n;
        cin>>n;
    vector<int>v1(n), v2, v3, v4;
    for(i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    sort(v1.begin(), v1.end());
    long long cn=0;
    for(i=0;i<n;i++)
    {
        if(v1[i]<0)
        cn++;
    }
    v2.push_back(v1[0]);
    cn--;
    if(cn%2==0)
    {
        for(i=1;i<n;i++)
        {
            if(v1[i]!=0)
            v3.push_back(v1[i]);
            else v4.push_back(v1[i]);
        }
    }
    else
    {
        v4.push_back(v1[1]);
        for(i=2;i<n;i++)
        {
            if(v1[i]==0)
            v4.push_back(v1[i]);
            else v3.push_back(v1[i]);
        }
    }
    cout<<v2.size()<<" ";
    for(i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<endl;
    cout<<v3.size()<<" ";
     for(i=0;i<v3.size();i++)
    cout<<v3[i]<<" ";
    cout<<endl;
    cout<<v4.size()<<" ";
     for(i=0;i<v4.size();i++)
    cout<<v4[i]<<" ";
    cout<<endl;
    return 0;
}