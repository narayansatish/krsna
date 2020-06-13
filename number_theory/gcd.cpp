#include<bits/stdc++.h>
using namespace  std;
long long int gcd (long long int a,long long int b)
        {
                if(a%b==0)
                        return b;
                 else
                        return gcd(b,a%b);

        }

int main()
{ long long int a,b;
 cin>>a>>b;
 if(a>b)
         cout<<gcd(a,b);
 else
         cout<<gcd(b,a);
 return 0;



}

