#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n, ma, mi, s=0, i, temp;
    // cout<<"Enter the Size of Array: \n";
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
        s+=temp;
    }
    mi = v[0];
    ma = v[0];
    for(i=0;i<n;i++)
    {
        if(v[i]<mi)
        mi = v[i];
        if(v[i]>ma)
        ma = v[i];
    }
    cout<<s-mi<<endl;
    cout<<s-ma<<endl;
    return 0;
}