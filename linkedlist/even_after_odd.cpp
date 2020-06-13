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
        {int n;
         cin>>n;
         node *head=NULL,*temp,*prev;
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
         node *ehead=NULL,*ohead=NULL,*etemp=NULL,*otemp=NULL;
         while(head!=NULL)
                {if((head->data)%2==0)
                        {if(ehead==NULL)
                                ehead=head;

                         else
                                etemp->next=head;
                         etemp=head;

                        } 
		 else
                        {
                         if(ohead==NULL)
                                ohead=head;

                         else
                                otemp->next=head;
                         otemp=head;
                        }
                 head=head->next;
                }
		if(etemp!=NULL)
			etemp->next=NULL;
		if(otemp!=NULL){
        otemp->next=ehead;
		head=ohead;
		}
		else
			head=ehead;
        while(head!=NULL)
                { cout<<head->data<<" ";
                  head=head->next;
                }

        return 0;
		}
