#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v(5,100);
for(auto it=v.begin();it!=v.end();)
	{cout<<*it<<endl;
	 auto temp=it;
	 v.erase(it);
	 it=temp;
	}
return 0;




}
