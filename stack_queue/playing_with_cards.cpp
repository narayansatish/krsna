#include<bits/stdc++.h>
using namespace std;
int main()
{        long long int t,n=10000000,check=0,i;
        vector<bool> arr(n,true);
        arr[0]=false;arr[1]=false;
        vector<long long int> nprime;
        for( i=2;i<=sqrt(n);i++)
                {check=0;
                 if(arr[i]==false)
                        continue;
                 for(long long int j=2;j<=sqrt(i);j++)
                        {if(i%j==0)
                                check=1;
                        }
                 if(check==0)
                        {arr[i]=true;
                         nprime.push_back(i);
                         for(long long int  j=i*i;j<n;j=j+i)
                                arr[j]=false;
                        }
                 else
                         arr[i]=false;
                }
         for(;i<n;i++)
                 if(arr[i]==true)
                         nprime.push_back(i);
	 stack<int> a1,a0,b1;
	 int k,temp;
	 cin>>k;
	 i=k;
	 while(i--){
		cin>>temp;
		a0.push(temp);
		}
	 i=k;
	 while(i--)
	 	{temp=a0.top();
		 if(temp%nprime[i-1]==0)
			 b1.push(temp);
		 else
			 a1.push(temp);
		a0.pop();
		}
	 while(!b1.empty())
	 	{cout<<b1.top()<<endl;b1.pop();
		}
	 while(!a1.empty())
                {cout<<a1.top()<<endl;a1.pop();
                }
return 0;




}
