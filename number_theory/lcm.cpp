#include<bits/stdc++.h>
using namespace std;
int main()
	{long long int a,b,i,lc;
	 cin>>a>>b;
	 if(b>=a)
	 	i=b/a;
	 else
		 i=1;
	 lc=i*a;

	 while(lc%a!=0||lc%b!=0)
	 	{lc=lc+a;
		}
	 cout<<lc;
	 return 0;
	}
