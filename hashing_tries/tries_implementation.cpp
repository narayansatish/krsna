#include<bits/stdc++.h>
using namespace std;
class node{
        public:
        char data;
        bool terminal;
        unordered_map<char,node*> children;
        node(char c,bool term)
                {data=c;
                 terminal=term;
                }
        static node * getnode(char c)
                {return new node(c,false);
                }
        };
class tries
        {public:
                node * root;
                tries()
                        {root=node::getnode('\0');
                        }
                void insert(string s)
                        {node * temp=root,*ret;
                         for(int i=0;s[i]!='\0';i++)
                                { if(temp->children.count(s[i]))
                                                {temp=temp->children[s[i]];
                                                }
                                  else
                                        {
                                         ret=node::getnode(s[i]);
                                         temp->children[s[i]]=ret;
                                          temp=ret;
                                        }
                                }
                                temp->terminal=true;
                        }
                bool find(string s)
                                        {node * temp=root;
                         for(int i=0;s[i]!='\0';i++)
                                {if(temp->children.count(s[i]))
                                        temp=temp->children[s[i]];
                                 else
                                        return false;
                                }
                         if(temp->terminal)
                                 return true;
                         return false;

                        }
        };
int main()
        {tries tri;
	 int i=1,j;
	 string s;
	 while(i)
	 	{cout<<endl<<"for insert 1 and search 2:";
		 cin>>j;
		 switch(j)
		 	{ case 1:
				cout<<"enter string for insert:";
				cin>>s;
				tri.insert(s);
				break;
			   case 2:
				cout<<"enter string for search:";
				cin>>s;
				if(tri.find(s))
					cout<<s<<" " <<"is there"<<endl;
				else
					cout<<s<<" "<<"is not there "<<endl;
				break;
			}
		 cout<<"if you want to continue enter 1 else 0:";
		 cin>>i;
		}

        return 1;
        }

