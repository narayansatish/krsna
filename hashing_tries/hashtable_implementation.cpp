#include<bits/stdc++.h>
using namespace std;
template <typename t>
class node{
	public:
		string key;
		t value;
		node *next;
		node(string key,t value )
			{this->key=key;
			 this->value=value;
			 this->next=NULL;
			}
	};
template <typename t>
class hashtable{
	 public:
		 node<t> ** table;
		 int ts;
		 int count;
		 hashtable()
		 	{this->ts=7;
			 table= new node<t>*[ts];
			 for(int i=0;i<ts;i++)
				 table[i]=NULL;
			 count=0;
			}
		 int key(string s)
		 	{
			 long long k=0,l=s.length(),p=1;
                         for(int i=0;i<l;i++)
                                {k=(k%ts+(p*((s[i]-0)%ts))%ts)%ts;p=(p*37)%ts;
                                }

			 return k;

			}
		 int insert(string s,int n)
		 	{long long k=0;
			 k=this->key(s);
			 node<t> *nod=new node<t>(s,n);
		 	 nod->next=table[k];
			 table[k]=nod;
			 count++;
			 if((count*1.0)/ts>0.8)
			 	{cout<<"REHASHING->>>>>>>>>>>>>>>>>>>>>>>>";
				 this->rehash();
				}
			 }
		 bool search(string s)
                        {long long k=0,l=s.length(),p=1;
			 k=this->key(s);
                         node<t> *temp=table[k];
			 while(temp!=NULL)
			 	{if(temp->key==s)
					return true;
				 temp=temp->next;
				}
			 return false;

			}
		 void erase(string s)
			{long long k=0,l=s.length(),p;
                         k=this->key(s);
                         node<t> *temp=table[k],*prev=NULL;
			 while(temp!=NULL)
                                {if(temp->key==s)
					{if(prev==NULL)
						table[k]=temp->next;
					 else
					 	prev->next=temp->next;
					 delete temp;
					 break;
					}
				 prev=temp;
                                 temp=temp->next;
                                }
			 
			}
		 void print()
		 	{node<t> *temp;
			 for(int i=0;i<ts;i++)
			 	{cout<<endl<<"BUCKET "<<i<<":";
				 temp=table[i];
				 while(temp!=NULL)
				 	{cout<<temp->key<<","<<temp->value<<"->";temp=temp->next;}
				}
			}
		 void rehash()
		 	{int ns=2*ts,check=1;
			 for(int i=ns+1;;i++)
			 	{for(int j=2;j<=i/2;j++)
				 	{if(i%j==0)
						{check=0;break;
						}
					}
				 	if(check==1)
						{ns=i;
						 break;
						}
				}
			 node<t> ** newtable=new node<t>*[ns],**oldtable=table;
			 for(int i=0;i<ns;i++)
				 newtable[i]=NULL;
			 table=newtable;
			 int s=ts;
			 ts=ns;
			 ns=s;
			 count=0;
			 node<t> *temp,*curr;
			 for(int i=0;i<s;i++)
			 	{temp=oldtable[i];
				 while(temp!=NULL)
				 	{this->insert(temp->key,temp->value);
				         curr=temp;
					 temp=temp->next;
					 delete curr;
					}
				}
			 delete []oldtable;	
			}

		};
int main()
	{int i=1,value,j;
	 string key;

	 hashtable<int> hash;
	 while(i)
	 	{
		 cout<<endl<<"for insert 1,search 2,erase 3,print 4:";
		 cin>>j;
		 switch(j)
		 	{case 1:
				cout<<endl<<"enter key and value:";
				cin>>key>>value;
				hash.insert(key,value);
				break;
			 case 2:
				cout<<endl<<"enter key for search:";
				cin>>key;
				cout<<hash.search(key);
				break;
			 case 3:
				cout<<endl<<"enter key";
				cin>>key;
				hash.erase(key);
				break;
			 case 4:
				hash.print();
				break;
			}
		 cout<<"if you want to continue 1 else 0:";
		 cin>>i;
		}
	return 0;
	}
