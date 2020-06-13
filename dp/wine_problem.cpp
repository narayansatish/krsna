#include<bits/stdc++.h>
using namespace std;
int  dp(int *arr,int s,int e,int **max_wine,int year)
	{if(s>e)
		return 0;
	 if(max_wine[s][e]!=-1)
		 return max_wine[s][e];
	 int l=arr[s]*year,r=arr[e]*year;
	 l=dp(arr,s+1,e,max_wine,year+1)+l;
	 r=dp(arr,s,e-1,max_wine,year+1)+r;
	 return max_wine[s][e]=max(l,r);
	}
int main()
{
int n;
cin>>n;
int *arr=new int[n];
//cout<<"haribol";
for(int i=0;i<=n-1;i++)
	{cin>>arr[i];
//	 cout<<"haribol"<<endl;
	}
//cout<<"haribol";
int **max_wine=new int *[n];
for(int i=0;i<n;i++)
	max_wine[i]=new int[n];
for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
		max_wine[i][j]=-1;
	}
//cout<<"haribol";
cout<<dp(arr,0,n-1,max_wine,1);

return 0;
}
