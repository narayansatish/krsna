#include<bits/stdc++.h>
using namespace std;
class node
        {public:
                int data;
                node *next;
        };
node * getnode()
        {return new node;
        }
node * makell(int n)
        {
                int  i=n;
         node *head=NULL,*temp,*prev=NULL;
         while(i--)
                {temp=getnode();
                 cin>>(temp->data);
                 temp->next=NULL;
                 if(head==NULL)
                        head=temp;
                 else
                        prev->next=temp;
                 prev=temp;

                }
         return head;
        }
void free(node *head)
	{delete head;
	}
void print(node * head)
        {node * temp;
         while(head!=NULL)
                {cout<<head->data<<" ";
                 temp=head;
                 head=head->next;
		 free(temp);

                }
         cout<<endl;
       }
node * mergell(node * head1,node *head2)
        {node * head=NULL,*temp,*prev,*temp1=head1,*temp2=head2;
         while(temp1!=NULL&&temp2!=NULL)
                {if(temp1->data<temp2->data)
                        { temp=temp1;
                          temp1=temp1->next;
                          if(head==NULL)
                                { head=temp;prev=head;}
                          else
                                  prev->next=temp;
                          prev=temp;
                        }
                 else
                        { temp=temp2;
                          temp2=temp2->next;
                          if(head==NULL)
                                {head=temp;prev=head;}
                          else
                                  prev->next=temp;
                          prev=temp;
                        }
                }
         if(temp1==NULL&&temp2!=NULL)
                {while(temp2!=NULL)
                        {if(head==NULL)
                                head=temp2;
                        else{
                         temp->next=temp2;
                         temp2=temp2->next;
                         temp=temp->next;}
                         }
                }
         if(temp2==NULL&&temp1!=NULL)
    		{while(temp1!=NULL)
                        {if(head==NULL)
                                head=temp1;
                         else  {
      				temp->next=temp1;
                                temp1=temp1->next;
                                temp=temp->next;
                                }
                         }
                }
        return head;
        }
int main()
        {
         int t,n1,n2;
         node *head1,*head2,*head;
         cin>>t;
         while(t--)
                {
                 cin>>n1;
                 head1=makell(n1);
                 
                 cin>>n2;
                 head2=makell(n2);
                 head=mergell(head1,head2);
                 print(head);
                }
        return 0;


        }
