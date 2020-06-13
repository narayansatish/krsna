#include<bits/stdc++.h>
using namespace std;
long long int  search_sor_ro ( long long int *arr,long long int n,long long int key)
	{long long ans=-1,s=0,e=n-1,mid;
	 while(s<=e)
	  	{
		 mid=(s+e)/2;
		 
			 if(arr[mid]==key)
				{ans=mid;
				 break;
				}
			 if(arr[mid]>key)
			 	{if(key>arr[s])
					e=mid-1;
				 else
					 s=mid+1;
				}
			 else
			 	{if(key>arr[e])
					e=mid-1;
				 else
					 s=mid+1;
				}
				}
	return ans;
	}
int main()
{
long long int n,key,q,*arr;
         cin>>n;
         arr=new long long int[n];

         for(long long int i=0;i<n;i++)
                cin>>arr[i];
	 cin>>q;
cout<< search_sor_ro(arr,n,q);
return 0;


} 
