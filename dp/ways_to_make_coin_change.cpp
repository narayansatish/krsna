#include<bits/stdc++.h>
using namespace std;
int  change(int *deno, int n, int value,int *arr){
	if(value==0)
		return 0;
	if(arr[value]>=0)
		return arr[value];
	if(value<0)
		return -1;
	for(int i=0;i<n;i++)
		{


		}


}
int main()
{
	int deno[4]={2,5,3,6},int arr[11];sort(deno,deno+4);
	cout<<change(deno,4,10);
	return 0;
}
