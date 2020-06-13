#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *arr=new int[n];
	int one[200],result;
	for(int i=0;i<200;i++)
		{
		 one[i]=0;
		}
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)	
		{int k=1,j=0;
		 while(k)
		 	{if(k&arr[i])
				one[j]++;
			 j++;
			 k=k<<1;
			}
		}
	result=0;
	for(int i=0;i<200;i++)
		{	one[i]=one[i]%3;
			if(one[i])
				result=result+(1<<i);
		}
	cout<<result;
//	7
//1 1 1 2 2 2 3
return 0;
}
