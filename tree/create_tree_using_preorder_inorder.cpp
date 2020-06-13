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
void print(node *root)
	{if(root==NULL)
		return;
	 if(root->left!=NULL)
		 cout<<root->left->data;
	 else
		 cout<<"END";
	 cout<<" => ";
	 cout<<root->data<<" <= ";
	 if(root->right!=NULL)
                 cout<<root->right->data<<endl;
         else
                 cout<<"END"<<endl;
	 print(root->left);
	 print(root->right);
	}
int main()
{int n;
 cin>>n;
 int *pre=new int[n];
 for(int i=0;i<n;i++)
	 cin>>pre[i];
 cin>>n;
 int *in=new int[n];
 for(int i=0;i<n;i++)
         cin>>in[i];
 node *root=build(pre,in,n);
 print(root);
return 0;
}
