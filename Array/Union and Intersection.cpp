#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, temp, j, m, uc;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<int>vec1, vec2,vec3(m+n), vec4, vec5;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            vec1.push_back(temp);
        }
        for(i=0;i<m;i++)
        {
            cin>>temp;
            vec2.push_back(temp);
        }
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());
        temp = vec3[0];
        uc = 1;
        vec4.push_back(temp);
        uc = 1;
        //Union of two array
        for(i=0;i<m+n;i++)
        {
            if(vec3[i]==temp)
                continue;
            else
            {
                vec4.push_back(vec3[i]);
                temp = vec3[i];
                uc++;
            }

        }

        cout<<uc<<endl;
        for(i=0;i<vec4.size();i++)
            cout<<vec4[i]<<" ";

        int ic=0;
        for(i=0;i<vec4.size();i++)
        {
            if(count(vec2.begin(), vec2.end(), vec4[i])&&count(vec1.begin(), vec1.end(), vec4[i]))
            {
                ic++;
                vec5.push_back(vec4[i]);
            }
        }

        cout<<endl;
        cout<<ic<<endl;
        for(i=0;i<vec5.size();i++)
            cout<<vec5[i]<<" ";
    }
    return 0;
}

