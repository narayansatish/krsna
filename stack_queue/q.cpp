#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,temp;
  cin>>n;
  queue<int> q;
  for(int i=0;i<n;i++)
  	{q.push(i);
	}
  while(!q.empty())
  	{cout<<q.front()<<" ";
	 q.pop();
	}
return 0;
}
