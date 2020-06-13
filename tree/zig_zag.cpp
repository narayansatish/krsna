#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;
        node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};
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
void zigzag(node *root)
{stack<node *> s[2];
 int turn =1;
 node *curr,*temp;
 s[0].push(root);
 while(!s[0].empty()||!s[1].empty())
 	{if(turn)
		{while(!s[0].empty())
		 	{	temp=s[0].top();
		 		s[0].pop();
				if(temp->left!=NULL)
					s[1].push(temp->left);
				if(temp->right!=NULL)
                                        s[1].push(temp->right);
			        cout<<temp->data<<" ";
		 
			}
		 turn=0;
		}
	 else
	 	{while(!s[1].empty())
                        {       temp=s[1].top();
                                s[1].pop();
                                if(temp->right!=NULL)
                                        s[0].push(temp->right);
                                if(temp->left!=NULL)
                                        s[0].push(temp->left);
                                cout<<temp->data<<" ";
                 
                        }
                 turn=1;
                }
	}
}
int main()
{
node *root=build("true");
zigzag(root);
return 0;
}
