#include<bits/stdc++.h>
using namespace std;
int main()
{int n,k,i,index;
 cin>>n;
 k=n;
 int *arr=new int[n],*temp;
 for(k=0;k<n;k++)
 	{cin>>arr[k];
	}
cin>>k;
index=max_element(arr,arr+k)-arr;
cout<<arr[index]<<" ";
for(i=1;i<=n-k;i++)
	{if(index>=i)
		{if(arr[index]<arr[i+k-1])
			{index=i+k-1;
			 cout<<arr[index]<<" ";
			}
		 else
		 	{cout<<arr[index]<<" ";
			}
		}
	 else
	 	{if(arr[index]<arr[i+k-1])
				{index=i+k-1;
				 cout<<arr[index]<<" ";
				}
		 else
		 	{index=max_element(arr+i,arr+i+k)-arr;
			 cout<<arr[index]<<" ";
			}
		}
	 }
return 0;
}
