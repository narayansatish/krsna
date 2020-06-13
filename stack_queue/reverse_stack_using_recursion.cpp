#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int> *s ,int temp)
	{if(s->empty())
		{s->push(temp);
		 return ;
		}
	 int x=s->top();
	 s->pop();
	 insert_at_bottom(s,temp);
	 s->push(x);
	}
void reverse(stack<int> *s)
		{if(s->empty())
			return ;
		 int x=s->top();
		 s->pop();
		 reverse(s);
		 insert_at_bottom(s,x);
		}
int main()
	{stack<int> s;
	 int n,temp;
	 cin>>n;
	 while(n--)
		{cin>>temp;
		 s.push(temp);
		}
	 reverse(&s);
	 while(!s.empty())
	 	{cout<<s.top()<<endl;
		 s.pop();
		}
	return 0;
	}
