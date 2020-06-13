#include<bits/stdc++.h>
using namespace std;
class Stack
        {public:
                vector<int> v;
                int pop()
                        {int  m=v[v.size()-1];v.pop_back();
                                return m;
                        }
                void push(int n)
                        {v.push_back(n);
                        }
                bool isempty()
                        {if(v.size()==0)
                                return true;
                        }};
int main()
        {Stack s;
         int q,i,val;
         cin>>q;
         while(q--)
                {cin>>i;
                 switch(i)
                        {case 1:
                                if(!s.isempty())
                                        cout<<s.pop()<<endl;
                                else
                                        cout<<"No Code"<<endl;
                                break;
                         case 2:
                                cin>>val;
                                s.push(val);
                        }
                }
        return 0;
        }
