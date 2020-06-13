#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int t,n=1000000+1,check=0,i;
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
             
                         for(long long int  j=i*i;j<n;j=j+i)
                                arr[j]=false;
                        }
                 else
                         arr[i]=false;
                }
        cin>>t;
	int a,b,count;
        while(t--)
		{count=0;
		 cin>>a>>b;
		 for(;a<=b;a++)
			 if(arr[a])
				 count++;
		 cout<<count<<endl;
		}

        return 0;
}
