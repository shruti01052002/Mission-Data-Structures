#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n, s, d, f, i, t;
    // long long int fact;
    cin>>t;
    while(t--)
    {
	    cin>>n;
	    s = 0;
	    d = 5;
	    f = 1;
	    while(1)
	    {
	        s = s+n/d;
	        f++;
	        d = pow(5, f);
	        if(d>=n)
	        break;
	    }
	    cout<<s<<endl;
    }
    return 0;
}
