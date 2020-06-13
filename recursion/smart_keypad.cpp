#include<bits/stdc++.h>
using namespace std;
void keypad(string *table,vector<string> *v,string *s ,int n)
	{if((*s)[n+1]=='\0')
		{string str=table[(*s)[n]-48];
	        int l=str.length();
		for(int i=0;i<l;i++)
			{v->push_back(str.substr(i,1));
			}
		return ;
		}
	vector<string> pv;//will pass this vector to recursion call
	keypad(table,&pv,s,n+1);
	int vl=table[(*s)[n]-48].length();//lenghth 
	string str=table[(*s)[n]-48];
	int pvl=pv.size();
	for(int i=0;i<vl;i++)
		{for(int j=0;j<pvl;j++)
			v->push_back(str[i]+pv[j]);
		}
	return ;
	}
int main()
{
  string table[] = { "", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wx","yz" };
  string s;
  cin>>s;
  vector<string> v;
  keypad(table,&v,&s,0);
  int size=v.size();
  for(int i=0;i<size;i++)
	  cout<<v[i]<<" ";
  cout<<endl<<v.size();

return 0;
}
