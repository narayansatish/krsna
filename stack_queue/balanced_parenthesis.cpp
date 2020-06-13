#include<bits/stdc++.h> 
using namespace std;
class Stack
        {public:
                vector<char> v;
                int pop()
                        {char   m=v[v.size()-1];v.pop_back();
                                return m;
                        }
                void push(char n)
                        {v.push_back(n);
                        }
                bool isempty()
                        {if(v.size()==0)
                                return true;
                    }};int main()
        {Stack s;
         int q,i=0,val;
         string  c;
         cin>>c;
         while(c[i]!='\0')
                {switch(c[i])
		     {case 1:
                 	if(c[i]=='(')
                        	s.push(c[i]);
                 	else
                        	{if(s.isempty())
                                	{cout<<"No";break;}
                         	else
                                 	c[i]=s.pop();
                        	}
			break;
			case 2:

		     }
                       i++;
                }
         if(s.isempty())
                cout<<"Yes";
         else
                 cout<<"No";return 0;
        }
