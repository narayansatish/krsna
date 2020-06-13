#include<bits/stdc++.h>
using namespace std;
int *mergesort(int *arr,int n)
	{if(n==1)
		{int *merge=new int[1];
		 merge[0]=arr[0];
		 return merge;
		}
	 int l=n/2,r=n-l;
	 int *brr=arr+l;
	 int *m1=mergesort(arr,l);
	 int *m2=mergesort(brr,r);
	 int i=0,j=0,s=0;
	 while(i<l&&j<r)
		{if(arr[i]>brr[j])
			{arr[s]=brr[j];j++;s++;
			}
		 else
		 	{arr[s]=arr[i];i++;s++;
			}
		}
	if(i==l)
		{for(;j<r;j++)
			{merge

			}



		}





	}




