#include<bits/stdc++.h>
using namespace std;
void swap(int *arr,int i,int j)
	{int temp=arr[i];
	 arr[i]=arr[j];
	 arr[j]=temp;
	}
void bubble(int *arr,int n)
	{ 
	 for(int i=n-1;i>0;i--)
	 	{for(int j=0;j<i;j++)
			{if(arr[j]>arr[j+1])
				swap(arr,j,j+1);
			}
		}	
	}
void selection(int *arr,int n)
	{int max; 
	 for(int i=n-1;i>0;i--)
		{max=0;
		 for(int j=1;j<=i;j++)
			{if(arr[j]>arr[max])
				max=j;
			}
		 swap(arr,i,max);
		}
	}
void  insertion_sort(int *arr,int n)
	{int i,j,temp;
	
	 for(i=1;i<n;i++)
		{temp=arr[i]; 
		 for( j=i-1;j>-1;j--)
			{if(temp<arr[j])
				{arr[j+1]=arr[j];
				}
			 else
				 break;
			}
		 j++;
		 arr[j]=temp;
		}
		}
void print(int *arr,int n)
	{cout<<endl; 
	 for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";



	}
int main()
{
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
	cin>>arr[i];
insertion_sort(arr,n);
print(arr,n);



return 1;
}
