#include<bits/stdc++.h>
using namespace std;
int main()
	{int n,temp;
	 map<int ,int > ma;
	 cin>>n;
	 while(n--)
	 	{
		 cin>>temp;
                 if(ma.count(temp))
                         ma[temp]=ma[temp]+1;
                 else
                         ma[temp]=1;
		}
	 int value=0,key;
	 for(auto it=ma.begin();it!=ma.end();it++)
	 	{if(it->second>value)
			{key=it->first;value=it->second;}
		}
	 cout<<key;
	return 0;}
