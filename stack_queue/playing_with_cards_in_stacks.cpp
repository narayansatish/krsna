#include<bits/stdc++.h>
using namespace std;
int main()
    {   long long int t,n=10000000,check=0,i;
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
     int q,temp;
     cin>>n>>q;
     stack<int> a[q+1],b[q+1];
     for(int i=0;i<n;i++)
            {cin>>temp;
             a[0].push(temp);
            }
     for(int i=1;i<=q;i++)
        {while(!a[i-1].empty())
            {temp=a[i-1].top();
             a[i-1].pop();
             if(temp%nprime[i-1]==0)
                {b[i].push(temp);
                }
              else
              {
                  a[i].push(temp);
              }
            }
        }
        for(int i=1;i<=q;i++)
            {while(!b[i].empty())
                {
                    cout<<b[i].top()<<endl;b[i].pop();
                }
            }
        while(!a[q].empty())
                {
                    cout<<a[q].top()<<endl;a[q].pop();
                }
    return 0;
    }
