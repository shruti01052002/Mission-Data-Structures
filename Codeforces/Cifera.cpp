#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ci, re=1, c=0;
    cin>>n;
    cin>>ci;
    re = n;
    while(re<ci)
    {
        re*=n;
        c++;
    }
    if(re==ci)
    {
        cout<<"YES"<<endl;
        cout<<c<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}