#include<bits/stdc++.h>
using namespace std;
long long int lowerbound(long long int *arr,long long int n,long long int key)
	{long long int ans= -1,s=0,e=n-1,mid;
	 while(s<=e)
	 	{mid=(s+e)/2;
		 if(arr[mid]==key)
		 	{ans=mid;
			 e=mid-1;	
			}
		 else
		 	{if(arr[mid]<key)
				{s=mid+1;
				}
			 else
				 e=mid-1;
			}
		}
	 return ans;
	}
long long int upperbound(long long int *arr,long long int n,long long int key)
        {long long int ans= -1,s=0,e=n-1,mid;
         while(s<=e)
                {mid=(s+e)/2;
                 if(arr[mid]==key)
                        {ans=mid;
                         s=mid+1;
                        }
                 else
                        {
			 if(arr[mid]<key)
                                {s=mid+1;
                                }
                         else
                                 e=mid-1;
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
	while(q--)
		{cin>>key;
	         cout<<lowerbound(arr,n,key)<<" "<<upperbound(arr,n,key)<<endl;
		}	
	
	 return 0;
	}







