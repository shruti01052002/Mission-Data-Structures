#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, f=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            f = 1;
        }
    }
    if(f==1) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;

    return 0;
}