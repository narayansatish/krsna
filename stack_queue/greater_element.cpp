#include<bits/stdc++.h>
using namespace std;
int main()
	{long long n,i,j;
	 cin>>n;
	 long long int *arr=new long long int[n];
	 for(i=0;i<n;i++)
		 cin>>arr[i];
	 for(i=0;i<n;i++)
	 	{j=(i+1)%n;
		 while(j!=i)
		 	{if(arr[j]>arr[i])
				{cout<<arr[j]<<" ";
				 break;
				}
			 j=(j+1)%n;
			}
		 if(i==j) 
			 cout<<-1<<" ";
		 }
	 
	return 0;
	}
