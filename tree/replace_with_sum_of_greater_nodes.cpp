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
node * build(int * in ,int n)
	{if(n<1)
		return NULL;
	 int l=n/2;
	 node *root=getnode(in[l]);
	 root->left=build(in,l);
	 root->right=build(in+l+1,n-l-1);
	}
void pre(node *root)
	{if(root==NULL)
		return ;
	 cout<<root->data<<" ";
	 pre(root->left);
	 pre(root->right);
	}
int main()
	{int n;
	 cin>>n;
	 int *in=new int[n];
	 for(int i=0;i<n;i++)
	 	cin>>in[i];
	 for(int i=n-2;i>-1;i--)
		 in[i]=in[i]+in[i+1];
	node *root=build(in,n);
	pre(root);
	return 0;
	}
