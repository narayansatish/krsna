#include<bits/stdc++.h>
using namespace std;
class node
        {
         public:
                 int data;
                 node *left;
                 node *right;
                 node(int d)
                        {data=d;
                         left=NULL;
                         right=NULL;
                        }
        };
node * getnode(int d)
        {return new node(d);
        }
node * build()
        {int i=0,count=1,k,ded,temp,c;
         vector< vector<int > > tree;
	 
         while(count>0)
                {tree.push_back({});
                 ded=0;
		 c=0;
                 k=count;
                 while(k--)
                        {
			 cin>>temp;
                         if(temp==-1)
                                 ded=ded+1;
                  	 tree[i].push_back(temp);
                        }
                 i++;
                 count=2*count-2*ded;
		}
	 i=0;
	 
	 node * root=NULL,*x,*parent;
	 vector<vector<node *>> treenode;
	 for( i=0;i<tree.size();i++)
		{treenode.push_back({});c=0;	
		 for(auto it=tree[i].begin();it!=tree[i].end();it++)
				{temp=*it;
				 
				 if(root==NULL)
				 	{x=getnode(temp);
					 root=x;
					 treenode[i].push_back(x);
					}
				 else
				 	{parent=treenode[i-1][c/2];
			//		 cout<<parent->data<<" ";
					 if(temp==-1)
					 	{if(c%2==0)
							parent->left==NULL;
						 
						 else
							 parent->right=NULL;
						}
					 else
					 	{x=getnode(temp);
						 if(c%2==0)
                                                        parent->left=x;

                                                 else
                                                         parent->right=x;
						 treenode[i].push_back(x);
						}
					}
			         c++;
			}
				}
	/*	 for(int i=0;i<treenode.size();i++)
		 {for(auto it=treenode[i].begin();it!=treenode[i].end();it++)
				 cout<<(*it)->data;
				cout<<endl;
		 }
		}*/	
	 return root;
	}
void hight(node *root,int height,int distance,map<int,pair<node *,int > > *m)
	{if(root==NULL)
		return;
	 if(m->count(distance))
	 	{if((*m)[distance].second<=height)
			{(*m)[distance].first=root;
			 (*m)[distance].second=height;
			}
		}
	 else
	 	{(*m)[distance].first=root;
                 (*m)[distance].second=height;
		}

	 hight(root->left,height+1,distance-1,m);
	 hight(root->right,height+1,distance+1,m);
	}

void pre(node *root)
	{if(root==NULL)
		return;
	 cout<<root->data<<" ";
	 pre(root->left);
	 pre(root->right);

	}
int main()
	{node *root;
	  root=build();
	 map<int,pair<node *,int> > m;
	 hight(root,1,0,&m);
	 for(auto it=m.begin();it!=m.end();it++)
	 	{ cout<<((it->second).first)->data<<" ";
		}
	 
	 return 0;
	}
