#include<bits/stdc++.h>
using namespace std;
class node {public:
                int data;
                node *next;


};
node * getnode()
        {return new node;
        }
int main()
	{int n,i;
	 cin>>n;
	 node *head,*temp,*curr,*prev;
	 head=getnode();
	 cin>>head->data;
	 head->next=NULL;
	 n--;
	 curr=head;
	 while(n--)
	 	{cin>>i;
		 curr=head;
		 prev=NULL;
		 temp=getnode();
		 temp->data=i;
		 temp->next=NULL;
		 while(curr!=NULL)
			{if(curr->data>i)
				{if(curr==head)
					{temp->next=head;
					 head=temp;
					 }
				 else
				 	{temp->next=curr;
					 prev->next=temp;
					}
				 break;
				}
			 prev=curr;
			 curr=curr->next;

			}
		 if(curr==NULL)
			 prev->next=temp;



		}

	while(head!=NULL)
		{cout<<head->data<<" ";head=head->next;

		}





	return 1;
	}
