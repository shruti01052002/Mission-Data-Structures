/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    string s;
    int n;
    cin>>s;
    cin>>n;
    
    int su=0;
    
    int ws=0;
    int we=0, ma = 0;
    for(we=0;we<s.size();we++)
    {
        su+=s[we]-'a'+1;
        if(su<=n)
        ma = max(ma, we-ws+1);
        while(su>n)
        {
            ma = max(ma, we-ws);
            su-=s[ws]-'a'+1;
            ws++;
        }
    }
    cout<<s.size()-ma<<endl;
    return 0;
}
