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
node *build(string s){
    if(s=="true"){
        int d;
        cin>>d;
        node *root = new node(d);
        string l;
        cin>>l;
        if(l=="true"){
        root->left=build(l);
        }
        string r;
        cin>>r;
        if(r=="true"){
        root->right=build(r);
        }
        return root;
	}
	return NULL;
}
int height(node * root)
	{if(root==NULL)
		return 0;
	 int l=height(root->left),r=height(root->right);
	 if(l==-1 or r==-1)
		 return -1;
	 if(abs(l-r)<=1)
		 return max(l,r)+1;
	 else
		 return -1;

	}

int main()
{
node * root=build("true");
int l=height(root);
if(l!=-1)
	cout<<"true";
else
	cout<<"false";
return 0;




}
