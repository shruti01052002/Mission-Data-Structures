#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int temp=0, c=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        temp+=int(s[i]);
        v.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        if(int(s[i])%2==0)
        {
            if(v[i]%3==0 and i!=0) c++;
            for(int j=0;j<=i;j++)
            {
                if((v[i]-int(s[j]))%3==0)
                c++;
            }
        }
    }
    cout<<c<<endl;
}

