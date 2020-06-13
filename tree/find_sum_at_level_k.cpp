#include<bits/stdc++.h>
using namespace std;
class node {
	public:
	int data;
	vector<node *> v;
	node(int d)
		{data=d;
		 
		}
	};
node * getnode(int d)
	{return new node(d);
	}
node * buildtree(node *root)
	{int n,c;
	 cin>>n>>c;
	 root=getnode(n);
	 if(c==0)
		 return root;
	 while(c--)
	 	{root->v.push_back(buildtree(NULL));
		}
		
	return root; 
	}
void sumk(node *root,int level,int *sum,int k)
	{if(root==NULL)
		return ;
	 if(level==k)
		{*sum=*sum+root->data;return ;}
	 for(auto it=root->v.begin();it!=root->v.end();it++)
	 	{sumk(*it,level+1,sum,k);
		}
	}
int main()
{node *root=NULL;
 root=buildtree(root);
 int sum=0,k;
 cin>>k;
 sumk(root,0,&sum,k);
 cout<<sum;
return 0;
}
