#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int res, s, l, mi, ma, i;
        res = arr[n-1]-arr[0];
        s = arr[0]+k;
        l = arr[n-1]-k;
        for(i=0;i<n-1;i++)
        {
            mi = min(s, arr[i+1]-k);
            ma = max(l, arr[i]+k);
            if(mi<0) continue;
            res = min(res, ma-mi);
        }
        return res;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  