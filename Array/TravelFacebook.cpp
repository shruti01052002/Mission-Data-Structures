
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, i, j, k, n, l, f;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>n;
		string In, Out;
		cin>>In;
		cin>>Out;
		char res[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if((In[j]=='N'&&i!=j)||(Out[i]=='N'&&i!=j))
			    res[i][j] = 'N';
				else
				{
					if(abs(i-j)<=1)
    				{
    					if((Out[i]=='Y'&&In[j]=='Y')||i==j)
    					{
    						res[i][j] = 'Y';
    					}
    					else
    					res[i][j] = 'N';
    				}
					else if((Out[i]=='Y'&&res[i][j-1]=='Y'&&Out[j-1]=='Y'&&In[j]=='Y'))
    				{
    					res[i][j] = 'Y';
    				}
					else
					{
						f = 0;
						if(j<i)
						{
							for(l=j+1;l<i;l++)
    				        {
    				            if(In[l]=='Y')
    				            continue;
    				            else
    				            {
    				                f = 1;
    				                res[i][j] = 'N';
    				                break;
    				            }
    				        }
							if(f==0)
    				        {
    				            for(l=j+1;l<i;l++)
    				            {
    				                if(Out[l]=='Y')
    				                continue;
    				                else
    				                {
    				                    f = 1;
    				                    res[i][j] = 'N';
    				                    break;
    				                }
    				            }
    				            if(f==0)
    				            res[i][j] = 'Y';
    				        }
						}
						else if(i<j)
						{
							f = 0;
    				        for(l=i+1;l<j;l++)
    				        {
    				            if(In[l]=='Y')
    				            continue;
    				            else
    				            {
    				                f = 1;
    				                res[i][j] = 'N';
    				                break;
    				            }
    				        }
							if(f==0)
    				        {
    				            for(l=i+1;l<j;l++)
    				            {
    				                if(Out[l]=='Y')
    				                continue;
    				                else
    				                {
    				                    f = 1;
    				                    res[i][j] = 'N';
    				                    break;
    				                }
    				            }
    				            if(f==0)
    				            res[i][j] = 'Y';
    				        }
						}
					}
				}
			}
		}
		cout<<"Case #"<<k<<":"<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<res[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}

