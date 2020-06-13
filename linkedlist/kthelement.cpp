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
        {int n,k;
         cin>>n;
         node *curr,*head=NULL,*temp,*prev;
         while(n--)
                {temp=getnode();
                 cin>>temp->data;
                 temp->next=NULL;
                 if(head==NULL)
                         head=temp;
                 else
                         prev->next=temp;

                 prev=temp;
		 
                }
	cin>>k;
	int i=k;
	if(k!=n){
	temp=head;
	while(i--)
		{temp=temp->next;
		}
	curr=head;
	while(temp->next!=NULL)
		{ temp=temp->next;
		  curr=curr->next;
		}
	temp->next=head;
	head=curr->next;
	curr->next=NULL;
	while(head!=NULL)
		{cout<<head->data<<" ";head=head->next;}
	return 0;
}
