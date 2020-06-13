#include<bits/stdc++.h>
using namespace std;
int bottom_up(int n)
	{if(n==0)
		return 0;
	 if(n==1)
		 return 1;
	 int *arr=new int[n+1];
	 arr[0]=0;
	 arr[1]=1;
	 for(int i=2;i<=n;i++)
	 	{arr[i]=arr[i-1]+arr[i-2];
		}
	 return arr[n];
	}
void top_down(int *arr,int n)
	{if(arr[n]!=-1)
		return ;
	 top_down(arr,n-1);top_down(arr,n-2);
	 arr[n]=arr[n-1]+arr[n-2];
	}
int main()
{int arr[20];
 arr[0]=0;
 arr[1]=1;
 for(int i=2;i<20;i++)
	 arr[i]=-1;
 top_down(arr,19);
 cout<<arr[19];
return 0;
}
