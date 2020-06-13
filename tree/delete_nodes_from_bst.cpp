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
		 ~node()
		 	{if(left!=NULL)
			 	delete left;
			 if(right!=NULL)
			 delete right;
			}
        };
node * getnode(int d)
        {return new node(d);
        }
node *deletebst(node *root,int d)
	{if(root==NULL)
		return NULL;
	 if(root->data==d)
	 	{node * temp, *curr=root,*prev;
		 if(curr->left==NULL && curr->right==NULL)
		 	{                 curr->left=NULL;
                 curr->right=NULL;

			 delete curr;
			 return NULL;
			}
		 if(curr->right==NULL)
		 	{curr=root->left;
			                 root->left=NULL;
                 root->right=NULL; 
			delete root;
			 return curr;
			}
		 if(curr->left==NULL)
                        {curr=root->right;
                         root->left=NULL;
	                 root->right=NULL;
			 delete root;
                         return curr;
                        }
		 curr=curr->right;
		 prev=root;
		 while(curr->left!=NULL)
		 	{prev=curr;
			 curr=curr->left;
			}
		 temp=curr->right;
		 if(prev==root)
		 	{ curr->left=root->left;
			 root->left=NULL;
                 	 root->right=NULL;

			  delete root;
			  return curr;
			}
		 curr->left=root->left;
                 curr->right=root->right;
		 if(prev->right==curr)
			 prev->right=temp;
		 else
		 	prev->left=temp;
		 root->left=NULL;
		 root->right=NULL;
		 delete root;
		 return curr;
		}
	 if(root->data<d)
		 root->right=deletebst(root->right,d);
	 else
		 root->left=deletebst(root->left,d);
	 return root;
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
	int m;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++)
		cin>>arr[i];
	for(int i=0;i<m;i++)
		{root=deletebst(root,arr[i]);
		}
	pre(root);
	delete root;
	cout<<endl;
	}
int main()
{
int t;
cin>>t;
while(t--)
	bst();
	return 0;
}
