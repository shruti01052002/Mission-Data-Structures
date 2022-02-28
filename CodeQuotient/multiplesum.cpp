//find the sum of all the multiples of 3 or 5 that are less than or equals to x
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int Sum5or3(int x)
{
    long long int s3=0, s5=0, s15=0, i, n;
    n = x/3;
    s3 = n*(6+(n-1)*3)/2;
  	n = x/5;
  	s5 = n*(10+(n-1)*5)/2;
  	n = x/15;
  	s15 = n*(30+(n-1)*15)/2;
    return s3+s5-s15;
}
int main()
{
    long long int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        cout<<Sum5or3(x)<<endl;
    }
    return 0;
}