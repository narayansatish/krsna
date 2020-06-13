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
node *build()
	{int n;
	 bool check;
	 cin>>n;
	 node *root=getnode(n);
	 cin>>check;
	 if(check)
		 root->left=build();
	 cin>>check;
	 if(check)
		 root->right=build();
	 return root;
	}
bool check(node *root1,node *root2)
	{if(root1==NULL&&root2==NULL)
		return true;
	if((root1!=NULL&&root2!=NULL))
		{bool l1=check(root1->left,root2->left),l2=check(root1->right,root2->right);
		 if(l1&&l2)
			 return true;
		 else
			 return false;
		}
	 return false;
	}
int main()
{
 node *root1=build(),*root2=build();
 bool c=check(root1,root2);
 if(c)
	 cout<<"true";
 else
	 cout<<"false";
return 0;
}
