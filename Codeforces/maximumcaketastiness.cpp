#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long>v(n);
        for(i=0;i<n;i++)
        cin>>v[i];
        sort(v.rbegin(), v.rend());
        cout<<v[0]+v[1]<<endl;
    }
    return 0;
}