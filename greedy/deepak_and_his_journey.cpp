#include<bits/stdc++.h>
using namespace std;
int main()
	{int t ,n,sum=0,price;
	 cin>>t;
	 int *p,*re;
	 while(t--)
		{cin>>n;
		 p=new int[n];
		 re=new int[n];
		 for(int i=0;i<n;i++)
			 cin>>p[i];
		 for(int i=0;i<n;i++)
			 cin>>re[i];
		 int temp=0;price=0;
		 sum=p[0]*re[0];
		 for(int i=1;i<n;i++)
		 	{if(p[temp]<=p[i])
				{sum=sum+p[temp]*re[i];
				}
			 else
			 	{sum=sum+p[i]*re[i];
				 temp=i;
				}
			}
		cout<<sum<<endl;
		delete p, re;

		}		
	return 0;


	}



























