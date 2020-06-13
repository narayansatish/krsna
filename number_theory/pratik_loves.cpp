#include<bits/stdc++.h>
using namespace std;
int main()
{        long long int t,n=10000000,check=0,i;
        vector<bool> arr(n,true);
        arr[0]=false;arr[1]=false;
        vector<long long int> nprime;
        for( i=2;i<=sqrt(n);i++)
                {check=0;
                 if(arr[i]==false)
                        continue;
                 for(long long int j=2;j<=sqrt(i);j++)
                        {if(i%j==0)
                                check=1;
                        }
                 if(check==0)
                        {arr[i]=true;
                         nprime.push_back(i);
                         for(long long int  j=i*i;j<n;j=j+i)
                                arr[j]=false;
                        }
                 else
                         arr[i]=false;
                }
         for(;i<n;i++)
                 if(arr[i]==true)
                         nprime.push_back(i);
        cin>>t;
	long long a;
	while(t--)
        	{
		 cin>>a;	
		 cout<<nprime[a-1]<<endl;
		}
        return 0;
}
