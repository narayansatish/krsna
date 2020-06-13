#include<bits/stdc++.h>
using namespace std;
int sum_easy(int *arr,int n,vector<long long int> * v)
	{if(n==1)
		{v->push_back(arr[0]);
		 if(arr[0]==0)
			 return 1;
		 else
			 return 0;
		}
	 int check=sum_easy(arr+1,n-1,v);
	 if(check)
		 return 1;
	 int l=v->size(),sum;
	 for(int i=0;i<l;i++)
	 	{ sum=(*v)[i]+arr[0];
		  if(sum==0)
			  return 1;
		  else
			  v->push_back(sum);
		}
	 return 0;
	}
int main()
	{int *arr,t,n;
	 cin>>t;
	 vector<long long int> v;
	 while(t--)
	 	{cin>>n;
		 arr=new int[n];
		 for(int i=0;i<n;i++)
			 cin>>arr[i];
		 if(sum_easy(arr,n,&v))
			 cout<<"Yes"<<endl;
		 else
			 cout<<"No"<<endl;
		 delete [] arr;
		 v.clear();
		}




	return 0;

	}
