#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, ma=0;
    cin>>n>>a>>b>>c;
    if(n%a==0) ma = max(ma, n/a);
    if(n%b==0) ma = max(ma, n/b);
    if(n%c==0) ma = max(ma, n/c);
    if(n%(a+b)==0) ma = max(ma, 2*(n/(a+b)));
    if(n%(b+c)==0) ma = max(ma, 2*(n/(b+c)));
    if(n%(a+c)==0) ma = max(ma, 2*(n/(a+c)));
    if(n%(a+b+c)==0) ma = max(ma, 3*(n/(a+b+c)));
    cout<<ma<<endl;
}