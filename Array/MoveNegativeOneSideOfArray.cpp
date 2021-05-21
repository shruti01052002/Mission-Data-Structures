#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, temp, j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>vec;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            vec.push_back(temp);
        }
        temp = vec[0];
        j = 0;
        for(i=1;i<n;i++)
        {
            if(vec[i]<0)
            {
                if(i!=j)
                    swap(vec[i], vec[j]);
                j++;
            }
        }
        for(i=0;i<n;i++)
            cout<<vec[i]<<" ";

        cout<<endl;
    }
    return 0;
}
