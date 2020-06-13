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
node * build(int *pre,int *in,int inl)
        {if(inl==0)
                return NULL;
         node *root;int i;
         root=getnode(pre[0]);
         for( i=0;i<inl;i++)
                {if(in[i]==pre[0])
                        break;
                }
         root->left=build(pre+1,in,i);
         root->right=build(pre+i+1,in+i+1,inl-i-1);
         return root;
        }
void searchnode(node *root,int k,vector<int> *v)
	{if(root==NULL)
		return ;
	 if(k==0)
		{v->push_back(root->data);
		 return ;
		}
	 searchnode(root->left,k-1,v);
	 searchnode(root->right,k-1,v);
	}
int  search(node *root,int n,int k,vector<int> *v)
	{if(root==NULL)
		return -1;
	 if(root->data==n)	 
		{searchnode(root,k,v);
		 return k-1;
		}
	 else
	 	{ int l=search(root->left,n,k,v);
		  int r=search(root->right,n,k,v);
		  if(l<0&&r<0)
			  return -1;
		  if(l>0)
		  	{ searchnode(root->right,l-1,v);
		  	  return l-1;
			}
		  if(l==0 or r==0)
		  	{v->push_back(root->data);
			 return -1;
			}
		  if(r>0)
                        { searchnode(root->left,l-1,v);
                          return l-1;
                        }

			
		}
	}
int main()
{int n,k,t,c;
 vector<int> v;
 cin>>n;
 int *pre=new int[n];
 for(int i=0;i<n;i++)
         cin>>pre[i];

 int *in=new int[n];
 for(int i=0;i<n;i++)
         cin>>in[i];
 node *root=build(pre,in,n);
 cin>>t;
 while(t--)
 	{cin>>n>>k;
	 c=search(root,n,k,&v);
	 if(v.size()==0)
	 	{cout<<"0"<<endl;
		 continue;
		 }
	 sort(v.begin(),v.end());
	 for(auto it=v.begin();it!=v.end();it++)
		 cout<<*it<<" ";
	cout<<endl;
	 v.clear();
 	}
 return 0;
}
