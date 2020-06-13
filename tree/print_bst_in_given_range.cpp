#include<bits/stdc++.h>
using namespace std;
class node 
	{public:
		int data;
		node *left;
		node *right;
		node(int d)
			{data=d;
			 left=NULL;
			 right=NULL;
			}
		~node()
			{delete left;
			 delete right;
			}	
	};
node *getnode(int d)
	{return new node(d);
	}
void print(node *root,int k1,int k2)
	{if(root==NULL)
		return ;
	 print(root->left,k1,k2);
	 if(root->data>=k1&&root->data<=k2)
                cout<<root->data<<" ";

	 print(root->right,k1,k2);
	}
void pre(node *root)
        {if(root==NULL)
		return ;
	 cout<<root->data<<" ";
         pre(root->left);
         pre(root->right);
        }

void  bst()
	{int n,k,d,k1,k2;
	 cin>>n;
	 k=n;
	 node *root=NULL,*temp,*curr,*prev;
	 while(k--)
		{cin>>d;
		 curr=root;
		 temp=getnode(d);
		 if(root==NULL)
			 root=temp;
		 else
		 	{while(curr!=NULL)
				{prev=curr;
				 if(curr->data<d)
					curr=curr->right;
				 else
					 curr=curr->left;
				}
			 if(prev->data<d)
				 prev->right=temp;
			 else
				 prev->left=temp;
			}
		}
	 cin>>k1>>k2;
	cout<<"# Preorder : ";
	pre(root);
	cout<<endl;
	cout<<"# Nodes within range are : ";
	print(root,k1,k2);
	cout<<endl;
	delete root;

	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{bst();
		}
return 0;
}
