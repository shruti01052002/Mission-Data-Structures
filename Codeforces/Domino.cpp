#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, cx=0, cy=0;
    vector<int>v1, v2;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x%2!=0)
        cx++;
        if(y%2!=0)
        cy++;
        v1.push_back(x);
        v2.push_back(y);
    }
    int f=-1;
    if(cx%2==0 and cy%2==0) cout<<0<<endl;
    else if((cx%2==0 and cy%2!=0) or (cx%2!=0 and cy%2==0)) cout<<-1<<endl;
    else if(cx%2!=0 and cy%2!=0)
    {
        for(int i=0;i<v1.size();i++)
        {
            if((v1[i]%2!=0 and v2[i]%2==0) or (v1[i]%2==0 and v2[i]%2!=0))
            {
                f = 1;
                break;
            }
        }
        cout<<f<<endl;
    }
    return 0;
}