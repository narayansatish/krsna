#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string,int> p1,pair<string,int>p2)
	{if(p1.second==p2.second)
		return p1.first < p2.first;

	 return p1.second> p2.second;
	}
int main()
{int k,n,sal;
 string name;
 cin>>k>>n;
 vector<pair<string ,int> > v;
 for(int i=0;i<n;i++)
 	{cin>> name>> sal;
	 v.push_back(make_pair(name,sal));
	}
 for(int i=0;i<n;i++)
 	{if(v[i].second<sal){
			    v.erase(v.begin()+i);
			    i--;
			    n--;
		}
	}
 sort(v.begin(),v.end(),compare);
 for(auto it=v.begin();it!=v.end();it++)
	 cout<<it->first<<" "<<it->second<<endl;
return 0;
}
