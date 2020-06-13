#include<bits/stdc++.h>
using namespace std;

int countStepsTo1(int n){
int arr[n+1];
arr[1]=0;
arr[2]=1;
arr[3]=1;
for(int i=4;i<=n;i++)
	{int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	 x=arr[i-1];
	 if(i%2==0)
		 y=arr[i/2];
	 if(i%3==0)
		 z=arr[i-/3];
	 arr[i]=min(x,min(y,z))+1;
	}
	return arr[n];
}

int main()
{ 
cout<< countStepsTo1(4);
 return 0; 
}
