#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string su(string s) {
int i=1,j;
while(s[i]!='\0')
    {if(s[i]==s[i-1])
        {
            s[i]='#';s[i-1]='#';
        }
        i++;
    }
    i=0;j=0;
while(s[j]!='\0')
    {if(s[j]!='#')
            {
                s[i]=s[j];i++;
            }
            j++;


    }
    for(;i<=j;i++)
        s[i]='\0';
        return s;

        }



int main()
{
	string s="";
	cout<<s.length();
	return 0;


}
