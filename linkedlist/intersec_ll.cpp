#include<iostream>
using namespace std;
class node {
                public:
                        int data;
                        node * next;
           };
node * getnode()
                {return new node;
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
int length(node *head)
	{int l=0;
	 while(head!=NULL)
	 	{l++;head=head->next;
		}
	 return l;
	}
node *kthposition(node *head,int k)
	{
	 while(k--)
	 	head=head->next;
	 return head;
	}
void intersection(node *head1,node *head2)
	{int l1=length(head1),l2=length(head2), m=l1-l2;
		cout<<"l1="<<l1<<"l2="<<l2;
	 if(m)
	 	head1=kthposition(head1,m);
	 else
		 head2=kthposition(head2,-1*m);
	 while(head1!=NULL||head2!=NULL)
			{ if(head1->data==head2->data)
				{cout<<head1->data;break;

				}
			 head1=head1->next;head2=head2->next;
			}
	 if(head1==NULL||head2==NULL)
		cout<<-1;
	}
int main()
{

int n1,n2;
cin>>n1;
node *head1=make(n1),*head2;
cin>>n2;
head2=make(n2);
intersection(head1,head2);
return 1;
}
