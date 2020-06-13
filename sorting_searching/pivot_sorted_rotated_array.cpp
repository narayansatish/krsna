#include<bits/stdc++.h>
using namespace std;
long long int pivot(long long *arr,long long int n)
	{long long int s=0,e=n-1,mid;
	 if(n==1)
		 return 0;
	 while(s<=e)
	 	{mid=(s+e)/2;
		 if(arr[mid]>arr[mid+1])
			 return mid;
		 else
		 	{if(arr[n-1]>arr[mid])
				e=mid-1;
			 else
				 s=mid+1;


			}
		}
	}
int main()
{long long int n,key,q,*arr;
         cin>>n;
         arr=new long long int[n];

         for(long long int i=0;i<n;i++)
                cin>>arr[i];
cout<<pivot(arr,n);
return 0;
}
