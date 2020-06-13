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
void  build()
	{int i=0,count=1,k,ded,temp;
	 vector< vector<int> > tree;
	 while(count>0)
	 	{tree.push_back({});
		 ded=0;
		 k=count;
		 while(k--)
			{cin>>temp;
			 if(temp==-1)
				 ded=ded+1;
			 else
				 tree[i].push_back(temp);
			}
		 i++;
		 count=2*count-2*ded;
		}
	for(i=0;i<tree.size()-1;i++)
	       cout<<tree[i][tree[i].size()-1]<<" ";
	}
int main()
{
build();
return 0;
}
