#include<bits/stdc++.h>
using namespace std;
class sum
	{public:
	long long	int psum;
	long long	int nsum;
		sum()
			{psum=0;
			 nsum=0;
			}
	};
void optimal(int *arr,int n,int turn,sum* s)
	{int index,m,val;
	 if(arr[0]>arr[n-1])
	 {val=arr[0];
          arr=arr+1;
	 }
	 else
	 	val=arr[n-1];
	 m=n-1;  
	 if(turn==1)
	 	{s->psum=s->psum+val;
		 turn=0;
		 if(n==1)
			 return ;
		 else
			 optimal(arr,m,turn,s);
		}
	 else
	 	{s->nsum=s->nsum+val;
                 turn=1;
                 if(n==1)
                         return ;
                 else
                         optimal(arr,m,turn,s);
		}

	}
int main()
{
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
	cin>>arr[i];
sum s;
optimal(arr,n,1,&s);
cout<<s.psum;






return 0;
}

