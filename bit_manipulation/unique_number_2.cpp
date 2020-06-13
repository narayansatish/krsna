#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int result=0;
  for(int i=0;i<n;i++)
    result=result^arr[i];
  
  int k=1;
  while(k&result==0)
        k=k<<1;
  int value=0;
  for(int i=0;i<n;i++)
    {if(k&arr[i])
	    {value=value^arr[i];
	  
	    }
    }
  result=result^value;
  if(result>value)
    cout<<value<<" "<<result;
  else
  {
    cout<<result<<" "<<value;
  }
    return 0;
}

