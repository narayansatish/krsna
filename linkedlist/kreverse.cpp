#include<bits/stdc++.h>
using namespace std;
class node {
                public:
                        int data;
                        node * next;
           };

node * getnode()
                {return new node;
                }
node * actual_reverse(node *head)
                {if(head->next==NULL||head==NULL)
                        return head;
                 node * temp=head->next,*simple_reverse=actual_reverse(temp);
                 temp->next=head;
                 head->next=NULL;
                 return simple_reverse;
                }
node * make(int i)
        {node *head=NULL,*temp,*curr=NULL;
         int n;
             while(i--)
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
                }
             return head;
        }
node * kreverse(node *head,int k)
	{ if(head==NULL)
		return NULL;
	  int i=k;
	  node *next,* end,*temp=head,*reversed_head;
	  i--;
	  while(i--)
		  temp=temp->next;
	  end=temp;
	  next=temp->next;
	  temp->next=NULL;
	  temp=actual_reverse(head);
	  reversed_head=kreverse(next,k);
	  head->next=reversed_head;
	  return temp;	
	}
void print(node *head)
        {cout<<endl;
         while(head!=NULL)
                {cout<<head->data<<" ";
                 head=head->next;
                }
        }
int main()
	{int n,k;
	 cin>>n>>k;
	 node *head=make(n);
	 head=kreverse(head,k);
	 print(head);

	return 0;
	}
