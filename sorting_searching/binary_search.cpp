#include<bits/stdc++.h>
using namespace std;
long long  b_search(long long int *arr,long long int n,long long int s)
	{long long index;
	 if(n==1)
		{if(arr[0]==s)
			return 0;
		 else
		        return -1;
		}
	 long long int start=0,end=n-1,m=(start+end)/2;
	 if(arr[m]==s)
	 	{
		 return m;
		}
	 if(arr[m]>s)
	 	{end=m-1;
		 index=b_search(arr,end+1,s);
		 if(index==-1)
			 return -1;
		 return index;
		}
	 start=m+1;
	 arr=arr+start;
	 index=b_search(arr,n-start,s);
	 if(index==-1)
		 return -1;
	 else
		return start+index;
		 	}
int main()
{
 long long int n;
 cin>>n;
 long long int *arr=new long long int[n];
 for(long long int i=0;i<n;i++)
	 cin>>arr[i];
 long long int s;
 cin>>s;
 cout<<b_search(arr,n,s);
 return 0;
}
