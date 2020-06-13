#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
class node{
                public:
                        char data;
                        bool terminal;
                        map<char,node*> children;
                        node(char c,bool term)
                        {data=c;
                         terminal=term;
                        }
                        static node * getnode(char c)
                                {return new node(c,false);
                                }
        };
class tries
        {       public:
                        node * root;
                        tries()
                                {root=node::getnode('\0');
                                }
                        void insert(string s)
                                {       node * temp=root,*ret;
                                        for(int i=0;s[i]!='\0';i++)
                                        {        if(temp->children.count(s[i]))
                                                        {       temp=temp->children[s[i]];
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
                        void  find(string s)
                                {       node * temp=root;
                                        int check=1;
                                        for(int i=0;s[i]!='\0';i++)
                                                {       if(temp->children.count(s[i]))
                                                                {
                                                                 temp=temp->children[s[i]];
                                                                }
                                                        else
                                                                { check=0;
                                                                  break;
                                                                }
                                                }
                                        if(check)
                                                 this-> prefix(s,temp);

                                }
                          void prefix(string s,node * temp)
                                {       if(temp->terminal)
                                        cout<<s<<endl;
                                        for(auto it=temp->children.begin();it!=temp->children.end();it++)
                                                { string pass = s + it->first;
                                                  this->prefix( pass,it->second);
}
                                                }
        };

int main()
        {       int n;
                cin>>n;
                tries tri;
                string s;
                while(n--)
                        {
                                cin>>s;
                                tri.insert(s);
                        }
                cin>>n;
                while(n--)
                        {
                                cin>>s;
                                tri.find(s);
                        }
                return 0;
        }

