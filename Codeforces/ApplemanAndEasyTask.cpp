#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, f=0;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int c = 0;
            if(a[i][j]=='x' or a[i][j]=='o')
            {
                if(i==0 and j==0)
                {
                    if(a[i][j+1]=='o')
                    c++;
                    if(a[i+1][j]=='o')
                    c++;
                }
                else if(i==n-1 and j==0)
                {
                    if(a[i-1][j]=='o') c++;
                    if(a[i][j+1]=='o') c++;
                }
                else if(i==0 and j==n-1)
                {
                    if(a[i][j-1]=='o') c++;
                    if(a[i+1][j]=='o') c++;
                }
                else if(i==n-1 and j==n-1)
                {
                    if(a[i-1][j]=='o') c++;
                    if(a[i][j-1]=='o') c++;
                }
                else if(j==0 and i!=0 and i!=n-1)
                {
                    if(a[i-1][j]=='o') c++;
                    if(a[i][j+1]=='o') c++;
                    if(a[i+1][j]=='o') c++;
                }
                else if(i==0 and j!=0 and j!=n-1)
                {
                    if(a[i][j-1]=='o') c++;
                    if(a[i][j+1]=='o') c++;
                    if(a[i+1][j]=='o') c++;
                }
                else if(j==n-1 and i!=n-1 and i!=0)
                {
                    if(a[i][j-1]=='o') c++;
                    if(a[i-1][j]=='o') c++;
                    if(a[i+1][j]=='o') c++;
                }
                else if(i==n-1 and j!=n-1 and j!=0)
                {
                    if(a[i-1][j]=='o') c++;
                    if(a[i][j-1]=='o') c++;
                    if(a[i][j+1]=='o') c++;
                }
                else 
                {
                    if(a[i][j+1]=='o') c++;
                    if(a[i+1][j]=='o') c++;
                    if(a[i-1][j]=='o') c++;
                    if(a[i][j-1]=='o') c++;
                }
            }
            if(c%2!=0)
            {
                f = 1;
                break;
            }
        }
        if(f==1)
        break;
    }
    if(f==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}