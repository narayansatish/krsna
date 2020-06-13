#include<bits/stdc++.h>
using namespace std;
bool compare( pair<int,int> pj1,pair<int,int> pj)
	{return pj1.second < pj.second;
	}

int main()
{	int t,n,s,e,fin;
	cin>>t;
	vector<pair<int,int>> v;
	while(t--)
		{cin>>n;
		 while(n--)
		 	{cin>>s>>e;
			 v.push_back(make_pair(s,e));
			}
		 sort(v.begin(),v.end(),compare);
		 fin=(v.begin())->second;
		 int count=1;
		 for(auto it=v.begin();it!=v.end();it++)
			 cout<<it->first<<"  "<<it->second<<endl;
		 for(auto it=v.begin()+1;it!=v.end();it++)
		 	{if(it->first>=fin)
				{count++;
				 fin=it->second;
				}
			}
		 cout<<count<<endl;v.clear();
		}

return 0;
}
















