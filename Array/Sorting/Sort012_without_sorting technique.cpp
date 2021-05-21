#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, temp, zero, one, two;
    cin>>t;
    while(t--)
    {
        cin>>n;
        zero = 0;
        one = 0;
        two = 0;
        vector<int>vec;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            vec.push_back(temp);
        }
        for(i=0;i<n;i++)
        {
            if(vec[i]==0)
                zero++;
            else if(vec[i]==1)
                one++;
            else
                two++;
        }
        for(i=0;i<n;i++)
        {
            if(zero==0)
            {
                if(one==0)
                {
                    two--;
                    vec[i] = 2;
                    continue;
                }
                else
                {
                    one--;
                    vec[i] = 1;
                    continue;
                }
            }
            else
            {
                zero--;
                vec[i] = 0;
                continue;
            }
        }
        for(i=0;i<n;i++)
            cout<<vec[i]<<" ";

        cout<<endl;
    }
    return 0;
}
