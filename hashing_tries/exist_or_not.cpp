#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,bool> ma;
	int t,n,q,*arr,temp;cin>>t;
	while(t--)
		{cin>>n;
		 while(n--)
		 	{cin>>temp;
			 ma[temp]=true;
			}
		 cin>>q;
		 while(q--)
		 	{cin>>temp;
			 if(ma.count(temp))
				 cout<<"Yes"<<endl;
			 else
				 cout<<"No"<<endl;
			}
		}
	return 0;
}
