#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i, res, temp;
        sort(nums.begin(), nums.end());
        temp = nums[0];
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]==temp)
            {
                res = nums[i];
                break;
            }
            else
                temp = nums[i];
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, temp;
        cin >> n;
        vector<int>arr;
        for (int i = 0; i < n; i++) {
            cin>>temp;
            arr.push_back(temp);
        }
        Solution ob;
        auto ans = ob.findDuplicate(arr);
        cout << ans << "\n";
    }
    return 0;
}  