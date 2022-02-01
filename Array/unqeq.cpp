#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            vector<int>v1, v2;
            long long a, b, f, c, i;
            a = 1;
            b = n;
            f = 0;
            c = n/2;
            while(c--)
            {
                if(f==0)
                {
                    v1.push_back(a);
                    a++;
                    f = 1;
                }
                else
                {
                    v1.push_back(b);
                    b--;
                    f = 0;
                }
                
            }

            for(i=0;i<=b;i++)
            {
                v2.push_back(i);
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());

            for(i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";

            cout<<endl;
            for(i=0;i<v2.size();i++)
            cout<<v2[i]<<" ";

        }
    }
    return 0;
}
