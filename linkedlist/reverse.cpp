#include<iostream>
using namespace std;
class node {
       		public:
			int data;
			node * next;
	   };	
node * reverse(node * head)
	{node * next,*curr,*prev;
	 if(head->next==NULL||head==NULL)
		 return head;
	 else{
	 next=head->next;
	 prev=NULL;
	 curr=head;
	 while(next!=NULL)
		{curr->next=prev;
		 prev=curr;
		 curr=next;
		 next=curr->next;
		}
	 curr->next=prev;
	 head=curr;
	 return head;
	 }
}
node * actual_reverse(node *head)
		{if(head->next==NULL||head==NULL)
			return head;
		 node * temp=head->next,*simple_reverse=actual_reverse(temp);
		 temp->next=head;
		 head->next=NULL;
		 return simple_reverse;
		}
node *reverse_recursive(node *prev,node *curr)
	{if(curr==NULL)
		return prev;
	 node *temp=curr->next;
	 curr->next=prev;
	 prev=curr;
	 curr=temp;
	 return reverse_recursive(prev,curr);
	}
void midpoint(node * head)
	{node *sp=head,*fp=head;
	 if(head->next==NULL)
		 cout<<head->data;
	 else{
	 while(fp->next!=NULL&&(fp->next)->next!=NULL)
	 	{fp=(fp->next)->next;
		 sp=sp->next;
		}
	 cout<<sp->data;
	}




	}
node * getnode()
		{return new node;
		}
node * make()
	{node *head=NULL,*temp,*curr=NULL;
	 int i=1,n;
	     while(i)
		{cin>>n;
		 temp=getnode();
		 temp->data=n;
		 temp->next=NULL;
		 if(head==NULL)
		 	{head=temp;
			 curr=head;
			}
		 else
		 	{curr->next=temp;
			 curr=temp;
			}
		cout<<"for discontinue enter 0 otherwise 1 :"<<endl;
		cin>>i;
	  	}
	     return head;
	}
void print(node *head)
	{cout<<endl;
	 while(head!=NULL)
	 	{cout<<head->data<<" ";
		 head=head->next;
		}
	}
int main()
	{node *head;
	 head=make();
	 midpoint(head);
	 return 0;
	}
