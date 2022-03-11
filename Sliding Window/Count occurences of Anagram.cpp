#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    vector<int>v(26, 0), p(26, 0);
	    int ps=pat.size();
	    for(int i=0;i<pat.size();i++)
	    p[pat[i]-'a']++;
	    int we=0, ws=0, c=0, f=0;
	    for(we=0;we<txt.size();we++)
	    {
	        v[txt[we]-'a']++;
	        if(we-ws+1>ps)
	        {
	            v[txt[ws]-'a']--;
	            ws++;
	        }
	        if(we-ws+1==ps)
	        {
	            f=0;
	            for(int i=0;i<26;i++)
	            {
	                if(v[i]==p[i]) continue;
	                else f=1;
	            }
	            if(f==0) c++;
	        }
	    }
	    return c;
	}

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  