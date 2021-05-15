#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int i, mi1, mi2, s;
        if(k<n)
        {
        for(i=0;i<n;i+=k)
        {
            if(k+i<n)
            reverse(arr.begin()+i, arr.begin()+k+i);
        }
        s = n/k;
        reverse(arr.begin()+(k*s), arr.begin()+n);
        }
        else
        reverse(arr.begin(), arr.end());
    }
};

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr;
        int k;
        cin >> k;

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);

        for(long long i = 0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
