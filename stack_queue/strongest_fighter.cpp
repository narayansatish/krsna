#include<bits/stdc++.h>
using namespace std;
int main()
{int n,k,i;
 cin>>n;
 int * arr=new int[n];
 for(int i=0;i<n;i++)
	 cin>>arr[i];
 cin>>k;
 deque<int> de;
 for( i=0;i<k;i++)
 	{while(!de.empty()&&arr[i]>de.front())
		de.pop_front();

	 de.push_back(i);
	}
 auto temp=de.begin();
 for(;i<n;i++)
 	{cout<<arr[de.front()]<<" ";
	 for(auto it=de.begin();it!=de.end();)
	 	{if(*it<=i-k||arr[*it]<arr[i])
			{temp=it;
			 de.erase(it);
			 it=temp;
			}
		else
			it++;

		}
         de.push_back(i);

	}
 	cout<<arr[de.front()];
return 0;
}
