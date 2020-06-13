#include<bits/stdc++.h>
using namespace std;
int main()
	{long long n,m,x,y,s,e,ans=-1,mid,remaining;
	 cin>>n>>m>>x>>y;
	 s=0;e=n;
	 while(s<=e)
	 	{mid=(s+e)/2;
		 remaining=m+y*(n-mid)-mid*x;
		 if(remaining==0)
		 	{ans=mid;
			 break;
			}
		 else
		 	{if(remaining>0)
				{ans=mid;
				 s=mid+1;
				}
			 else
				 e=mid-1;
			}
		}
	 cout<<ans;
	return 0;
	}
