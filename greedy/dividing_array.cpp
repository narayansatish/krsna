#include<bits/stdc++.h>
using namespace std;
long long int ab(long long int n)
        {if(n<0)
                return -1*n;
         return n;
        }
int main()
{
        long long        int n,l,r,t;
		long long  int min=0,max=0;
        cin>>t;
        vector< long long int> v1,v2;
        while(t--){
        cin>>n;
        l=n/2;

        while(l--)
                {cin>>r;
                 v1.push_back(r);
                }
        l=n/2;
        while(l--)
                {cin>>r;
                 v2.push_back(r);
                }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        min=0;max=0;
        l=n/2;
        for( long long  int i=0;i<l;i++)
                min=min+ab(v1[i]-v2[i]);
        for( long long  int i=0;i<l;i++)
                max=max+ab(v1[i]-v2[l-i-1]);
        cout<<min<<" "<<max<<endl;v1.clear();v2.clear();
        }
return 0;
}

