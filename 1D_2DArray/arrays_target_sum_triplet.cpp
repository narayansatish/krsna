#include<bits/stdc++.h>
using namespace std;
void print_triplet(int * arr,int t,int x,int n)
	{int i=0,j=n-1,temp;
    while(i<j)
        	{
            	temp=arr[i]+arr[j];
            	
		if(temp==t)
                	
			{
                    		cout<<x<<", "<<arr[i]<<" and "<<arr[j]<<endl;
               		     	i++;
				j--;
                	}
            	 else
                	{
                        	if(temp>t)
                            		{
                                		j--;
                            		}
                         	else
                                	i++;


                	}

		}
	}
int main()
	{int t,n;
	 cin>>n;
	 int *arr=new int[n];
	 for(int i=0;i<n;i++)
		 cin>>arr[i];
	 cin>>t;
	 sort(arr,arr+n);
	 for(int i=0;i<n-2;i++)
	 	{print_triplet(arr+i+1,t-arr[i],arr[i],n-i-1);

		}
	 return 0;
	}
