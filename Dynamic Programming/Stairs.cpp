#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> mymap;
class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 1;
        if(n<0)
            return 0;
      if(mymap.find(n)!=mymap.end())
          {
          cout<<n<<endl;
          return mymap[n];}
        mymap[n] = climbStairs(n-1) + climbStairs(n-2);
        return mymap[n];
    }
};