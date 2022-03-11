#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k);

int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        vector<long long>v, res;
        long long we=0, ws=0;
        for(we=0;we<N;we++)
        {
            if(A[we]<0)
            v.push_back(A[we]);
            if(we-ws+1>K)
            {
                if(A[ws]<0 and v.size()>0)
                {
                    v.erase(v.begin());
                }
                ws++;
            }
            if(we-ws+1==K)
            {
                if(v.size()==0)
                res.push_back(0);
                else
                res.push_back(v[0]);
            }
        }
        return res;
 }
 