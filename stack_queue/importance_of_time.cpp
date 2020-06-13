#include<bits/stdc++.h>
using namespace std;
int main()
	{int n;
	 cin>>n;
	 queue<int> call,ideal;
	 int k=n,temp,c,i,count=0;
	 while(k--)
	 	{cin>>temp;
		 call.push(temp);
		}
	 k=n;
	 while(k--)
	 	{
		 cin>>temp;
		 ideal.push(temp);
		}
	 while(!ideal.empty())
	 	{c=call.front();
		 i=ideal.front();
		 if(c==i)
		 	{count++;
			 call.pop();
			 ideal.pop();
			}
		 else
		 	{call.pop();
			 call.push(c);
			 count++;
			}	
		}
	 cout<<count;
	 return 0;
	}
