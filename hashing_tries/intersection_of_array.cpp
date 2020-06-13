#include<bits/stdc++.h>
using namespace std;
int main()
	{unordered_map<int,int> ma;
	 int n;
	 cin>>n;
	 int temp;
	 vector<int> v;
	 for(int i=0;i<n;i++)
	 	{cin>>temp;
		 if(ma.count(temp))
			 ma[temp]=ma[temp]+1;
		 else
			 ma[temp]=1;
		}
	 for(int i=0;i<n;i++)
	 	{cin>>temp;
		 if(ma.count(temp)&&ma[temp]--)
		 	v.push_back(temp);


		}
	 sort(v.begin(),v.end());
	 cout<<"[";
	 if(v.size()!=0)
		 cout<<*(v.begin());
	 for(auto it=v.begin()+1;it!=v.end();it++)
		 cout<<","<<*it;
	 cout<<"]";
	return 0;
	}
