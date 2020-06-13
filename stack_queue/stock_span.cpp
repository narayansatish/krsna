#include<bits/stdc++.h>
using namespace std;
int main()
	{
	 int n,i;
	 cin>>n;
	 i=n;
	 int *arr=new int[n],*span=new int[n];
	 for(i=0;i<n;i++)
		 cin>>arr[i];
	 span[0]=1;
	 for(i=1;i<n;i++)
	 	{int k=i-1;
		 while((arr[k]<arr[i])&&k>-1)
			 k--;
		 span[i]=i-k;

		}	
	 for(i=0;i<n;i++)
		 cout<<span[i]<<" ";
	 cout<<"END";
	 return 0;
	}
