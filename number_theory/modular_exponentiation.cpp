#include<bits/stdc++.h>
using namespace std;
int main()
{

long long int a,b,c,ans=1;
cin>>a>>b>>c;

while(b--)
	{ans=((ans)%c*(a)%c)%c;
	}

cout<<ans;





return 0;





}
